/*
 * Copyright (c) 2009-2010 jMonkeyEngine
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * * Neither the name of 'jMonkeyEngine' nor the names of its contributors
 *   may be used to endorse or promote products derived from this software
 *   without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

package jme3test.light;

import com.jme3.app.SimpleApplication;
import com.jme3.input.KeyInput;
import com.jme3.input.controls.ActionListener;
import com.jme3.input.controls.KeyTrigger;
import com.jme3.material.Material;
import com.jme3.math.ColorRGBA;
import com.jme3.math.Quaternion;
import com.jme3.math.Vector3f;
import com.jme3.renderer.queue.RenderQueue.ShadowMode;
import com.jme3.scene.Geometry;
import com.jme3.scene.Spatial;
import com.jme3.scene.debug.WireFrustum;
import com.jme3.scene.shape.Box;
import com.jme3.shadow.PssmShadowRenderer;

public class TestPssmShadow extends SimpleApplication {

    float angle;
    Spatial lightMdl;
    Spatial teapot;
    Geometry frustumMdl;
    WireFrustum frustum;
    boolean renderShadows=true;

    private PssmShadowRenderer pssmRenderer;
    private Vector3f[] points;

    {
        points = new Vector3f[8];
        for (int i = 0; i < points.length; i++) points[i] = new Vector3f();
    }

    public static void main(String[] args){
        TestPssmShadow app = new TestPssmShadow();
        app.start();
    }

    @Override
    public void simpleInitApp() {
        // put the camera in a bad position
        cam.setLocation(new Vector3f(-9.919669f, 29.182112f, -31.980177f));
        cam.setRotation(new Quaternion(0.14896771f, 0.22304894f, -0.034511957f, 0.96273917f));
        //cam.setFrustumFar(1000);

        Material mat = assetManager.loadMaterial("Common/Materials/RedColor.j3m");
        Material matSoil = new Material(assetManager,"Common/MatDefs/Misc/SolidColor.j3md");
        matSoil.setColor("m_Color", ColorRGBA.Cyan);

       
        //teapot = new Geometry("cube", new Box(1.0f, 1.0f, 1.0f));
        teapot = assetManager.loadModel("Models/Teapot/Teapot.obj");
        teapot.setLocalTranslation(0,0,10);
        
        teapot.setMaterial(mat);
        teapot.setShadowMode(ShadowMode.CastAndReceive);
        rootNode.attachChild(teapot);

         for (int i = 0; i < 30; i++) {
            Spatial t=teapot.clone();
            rootNode.attachChild(t);
            teapot.setLocalTranslation((float)Math.random()*3,(float)Math.random()*3,(i+2));
        }

        Geometry soil=new Geometry("soil", new Box(new Vector3f(0, -13, 550), 800, 10, 700));
        soil.setMaterial(matSoil);
        soil.setShadowMode(ShadowMode.CastAndReceive);
        rootNode.attachChild(soil);

        for (int i = 0; i < 30; i++) {
            Spatial t=teapot.clone();
            t.setLocalScale(10.0f);
            rootNode.attachChild(t);
            teapot.setLocalTranslation((float)Math.random()*300,(float)Math.random()*30,30*(i+2));
        }


        pssmRenderer = new PssmShadowRenderer(assetManager, 1024,4,PssmShadowRenderer.EDGE_FILTERING_PCF);
        pssmRenderer.setDirection(new Vector3f(-1, -1, -1).normalizeLocal());
        pssmRenderer.setLambda(0.3f);
        pssmRenderer.setShadowIntensity(0.6f);
      // pssmRenderer.setCropShadows(true);
        pssmRenderer.setPcfFilter(PssmShadowRenderer.FILTERING.PCF16X16);
        pssmRenderer.setEdgesThickness(5);
        viewPort.addProcessor(pssmRenderer);
        initInputs();
    }

      private void initInputs() {
        inputManager.addMapping("toggle", new KeyTrigger(KeyInput.KEY_SPACE));
        inputManager.addMapping("ShadowUp", new KeyTrigger(KeyInput.KEY_T));
        inputManager.addMapping("ShadowDown", new KeyTrigger(KeyInput.KEY_G));
        inputManager.addMapping("ThicknessUp", new KeyTrigger(KeyInput.KEY_Y));
        inputManager.addMapping("ThicknessDown", new KeyTrigger(KeyInput.KEY_H));

        ActionListener acl = new ActionListener() {

            public void onAction(String name, boolean keyPressed, float tpf) {
                if (name.equals("toggle") && keyPressed) {
                    if(renderShadows){
                        renderShadows=false;
                        viewPort.removeProcessor(pssmRenderer);
                    }else{
                        renderShadows=true;
                        viewPort.addProcessor(pssmRenderer);
                    }
                }

                if (name.equals("ShadowUp") && keyPressed) {
                   pssmRenderer.setShadowIntensity(pssmRenderer.getShadowIntensity()+0.1f);
                  System.out.println("Shadow intensity : "+pssmRenderer.getShadowIntensity());
                }
                if (name.equals("ShadowDown") && keyPressed) {
                   pssmRenderer.setShadowIntensity(pssmRenderer.getShadowIntensity()-0.1f);
                  System.out.println("Shadow intensity : "+pssmRenderer.getShadowIntensity());
                }
                if (name.equals("ThicknessUp") && keyPressed) {
                   pssmRenderer.setEdgesThickness(pssmRenderer.getEdgesThickness()+1);
                  System.out.println("Shadow thickness : "+pssmRenderer.getEdgesThickness());
                }
                if (name.equals("ThicknessDown") && keyPressed) {
                   pssmRenderer.setEdgesThickness(pssmRenderer.getEdgesThickness()-1);
                  System.out.println("Shadow thickness : "+pssmRenderer.getEdgesThickness());
                }
            }
        };

        inputManager.addListener(acl, "toggle", "ShadowUp","ShadowDown","ThicknessUp","ThicknessDown");

    }


}
