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
#include <jni.h>
/**
 * Author: Normen Hansen
 */
#include "jmeBulletUtil.h"
#include "com_jme3_bullet_joints_SliderJoint.h"

#ifdef __cplusplus
extern "C" {
#endif

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getLowerLinLimit
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getLowerLinLimit
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getLowerLinLimit();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setLowerLinLimit
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setLowerLinLimit
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setLowerLinLimit(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getUpperLinLimit
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getUpperLinLimit
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getUpperLinLimit();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setUpperLinLimit
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setUpperLinLimit
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setUpperLinLimit(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getLowerAngLimit
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getLowerAngLimit
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getLowerAngLimit();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setLowerAngLimit
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setLowerAngLimit
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setLowerAngLimit(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getUpperAngLimit
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getUpperAngLimit
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getUpperAngLimit();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setUpperAngLimit
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setUpperAngLimit
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setUpperAngLimit(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getSoftnessDirLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getSoftnessDirLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getSoftnessDirLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setSoftnessDirLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setSoftnessDirLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setSoftnessDirLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getRestitutionDirLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getRestitutionDirLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getRestitutionDirLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setRestitutionDirLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setRestitutionDirLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setRestitutionDirLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getDampingDirLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getDampingDirLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getDampingDirLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setDampingDirLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setDampingDirLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setDampingDirLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getSoftnessDirAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getSoftnessDirAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getSoftnessDirAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setSoftnessDirAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setSoftnessDirAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setSoftnessDirAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getRestitutionDirAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getRestitutionDirAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getRestitutionDirAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setRestitutionDirAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setRestitutionDirAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setRestitutionDirAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getDampingDirAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getDampingDirAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getDampingDirAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setDampingDirAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setDampingDirAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setDampingDirAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getSoftnessLimLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getSoftnessLimLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getSoftnessLimLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setSoftnessLimLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setSoftnessLimLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setSoftnessLimLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getRestitutionLimLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getRestitutionLimLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getRestitutionLimLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setRestitutionLimLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setRestitutionLimLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setRestitutionLimLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getDampingLimLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getDampingLimLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getDampingLimLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setDampingLimLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setDampingLimLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setDampingLimLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getSoftnessLimAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getSoftnessLimAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getSoftnessLimAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setSoftnessLimAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setSoftnessLimAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setSoftnessLimAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getRestitutionLimAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getRestitutionLimAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getRestitutionLimAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setRestitutionLimAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setRestitutionLimAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setRestitutionLimAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getDampingLimAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getDampingLimAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getDampingLimAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setDampingLimAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setDampingLimAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setDampingLimAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getSoftnessOrthoLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getSoftnessOrthoLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getSoftnessOrthoLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setSoftnessOrthoLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setSoftnessOrthoLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setSoftnessOrthoLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getRestitutionOrthoLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getRestitutionOrthoLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getRestitutionOrthoLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setRestitutionOrthoLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setRestitutionOrthoLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setRestitutionOrthoLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getDampingOrthoLin
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getDampingOrthoLin
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getDampingOrthoLin();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setDampingOrthoLin
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setDampingOrthoLin
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setDampingOrthoLin(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getSoftnessOrthoAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getSoftnessOrthoAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getSoftnessOrthoAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setSoftnessOrthoAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setSoftnessOrthoAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setSoftnessOrthoAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getRestitutionOrthoAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getRestitutionOrthoAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getRestitutionOrthoAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setRestitutionOrthoAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setRestitutionOrthoAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setRestitutionOrthoAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getDampingOrthoAng
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getDampingOrthoAng
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getDampingOrthoAng();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setDampingOrthoAng
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setDampingOrthoAng
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setDampingOrthoAng(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    isPoweredLinMotor
     * Signature: (J)Z
     */
    JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_joints_SliderJoint_isPoweredLinMotor
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getPoweredLinMotor();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setPoweredLinMotor
     * Signature: (JZ)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setPoweredLinMotor
    (JNIEnv * env, jobject object, jlong jointId, jboolean value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setPoweredLinMotor(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getTargetLinMotorVelocity
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getTargetLinMotorVelocity
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getTargetLinMotorVelocity();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setTargetLinMotorVelocity
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setTargetLinMotorVelocity
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setTargetLinMotorVelocity(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getMaxLinMotorForce
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getMaxLinMotorForce
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getMaxLinMotorForce();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setMaxLinMotorForce
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setMaxLinMotorForce
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setMaxLinMotorForce(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    isPoweredAngMotor
     * Signature: (J)Z
     */
    JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_joints_SliderJoint_isPoweredAngMotor
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getPoweredAngMotor();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setPoweredAngMotor
     * Signature: (JZ)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setPoweredAngMotor
    (JNIEnv * env, jobject object, jlong jointId, jboolean value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setPoweredAngMotor(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getTargetAngMotorVelocity
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getTargetAngMotorVelocity
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getTargetAngMotorVelocity();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setTargetAngMotorVelocity
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setTargetAngMotorVelocity
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setTargetAngMotorVelocity(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    getMaxAngMotorForce
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_SliderJoint_getMaxAngMotorForce
    (JNIEnv * env, jobject object, jlong jointId) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        return (long) joint->getMaxAngMotorForce();
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    setMaxAngMotorForce
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_SliderJoint_setMaxAngMotorForce
    (JNIEnv * env, jobject object, jlong jointId, jfloat value) {
        btSliderConstraint* joint = (btSliderConstraint*) jointId;
        joint->setMaxAngMotorForce(value);
    }

    /*
     * Class:     com_jme3_bullet_joints_SliderJoint
     * Method:    createJoint
     * Signature: (JJLcom/jme3/math/Vector3f;Lcom/jme3/math/Matrix3f;Lcom/jme3/math/Vector3f;Lcom/jme3/math/Matrix3f;Z)J
     */
    JNIEXPORT jlong JNICALL Java_com_jme3_bullet_joints_SliderJoint_createJoint
    (JNIEnv * env, jobject object, jlong bodyIdA, jlong bodyIdB, jobject pivotA, jobject rotA, jobject pivotB, jobject rotB, jboolean useLinearReferenceFrameA) {
        btRigidBody* bodyA = (btRigidBody*) bodyIdA;
        btRigidBody* bodyB = (btRigidBody*) bodyIdB;
        btTransform* transA = new btTransform(btMatrix3x3());
        jmeBulletUtil::convert(env, pivotA, &transA->getOrigin());
        jmeBulletUtil::convert(env, rotA, &transA->getBasis());
        btTransform* transB = new btTransform(btMatrix3x3());
        jmeBulletUtil::convert(env, pivotB, &transB->getOrigin());
        jmeBulletUtil::convert(env, rotB, &transB->getBasis());
        btSliderConstraint* joint = new btSliderConstraint(*bodyA, *bodyB, *transA, *transB, useLinearReferenceFrameA);
        return (long) joint;
    }

#ifdef __cplusplus
}
#endif
