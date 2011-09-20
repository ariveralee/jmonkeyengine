/**
 * vertex_weightsType.java
 *
 * This file was generated by XMLSpy 2007sp2 Enterprise Edition.
 *
 * YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
 * OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
 *
 * Refer to the XMLSpy Documentation for further details.
 * http://www.altova.com/xmlspy
 */


package com.jmex.model.collada.schema;


public class vertex_weightsType extends com.jmex.xml.xml.Node {

	public vertex_weightsType(vertex_weightsType node) {
		super(node);
	}

	public vertex_weightsType(org.w3c.dom.Node node) {
		super(node);
	}

	public vertex_weightsType(org.w3c.dom.Document doc) {
		super(doc);
	}

	public vertex_weightsType(com.jmex.xml.xml.Document doc, String namespaceURI, String prefix, String name) {
		super(doc, namespaceURI, prefix, name);
	}
	
	public void adjustPrefix() {
		for (	org.w3c.dom.Node tmpNode = getDomFirstChild( Attribute, null, "count" );
				tmpNode != null;
				tmpNode = getDomNextChild( Attribute, null, "count", tmpNode )
			) {
			internalAdjustPrefix(tmpNode, false);
		}
		for (	org.w3c.dom.Node tmpNode = getDomFirstChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "input" );
				tmpNode != null;
				tmpNode = getDomNextChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "input", tmpNode )
			) {
			internalAdjustPrefix(tmpNode, true);
			new InputLocalOffset(tmpNode).adjustPrefix();
		}
		for (	org.w3c.dom.Node tmpNode = getDomFirstChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount" );
				tmpNode != null;
				tmpNode = getDomNextChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount", tmpNode )
			) {
			internalAdjustPrefix(tmpNode, true);
		}
		for (	org.w3c.dom.Node tmpNode = getDomFirstChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "v" );
				tmpNode != null;
				tmpNode = getDomNextChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "v", tmpNode )
			) {
			internalAdjustPrefix(tmpNode, true);
		}
		for (	org.w3c.dom.Node tmpNode = getDomFirstChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "extra" );
				tmpNode != null;
				tmpNode = getDomNextChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "extra", tmpNode )
			) {
			internalAdjustPrefix(tmpNode, true);
			new extraType(tmpNode).adjustPrefix();
		}
	}
	public void setXsiType() {
 		org.w3c.dom.Element el = (org.w3c.dom.Element) domNode;
		el.setAttributeNS("http://www.w3.org/2001/XMLSchema-instance", "xsi:type", "vertex_weights");
	}

	public static int getcountMinCount() {
		return 1;
	}

	public static int getcountMaxCount() {
		return 1;
	}

	public int getcountCount() {
		return getDomChildCount(Attribute, null, "count");
	}

	public boolean hascount() {
		return hasDomChild(Attribute, null, "count");
	}

	public uint newcount() {
		return new uint();
	}

	public uint getcountAt(int index) throws Exception {
		return new uint(getDomNodeValue(getDomChildAt(Attribute, null, "count", index)));
	}

	public org.w3c.dom.Node getStartingcountCursor() throws Exception {
		return getDomFirstChild(Attribute, null, "count" );
	}

	public org.w3c.dom.Node getAdvancedcountCursor( org.w3c.dom.Node curNode ) throws Exception {
		return getDomNextChild( Attribute, null, "count", curNode );
	}

	public uint getcountValueAtCursor( org.w3c.dom.Node curNode ) throws Exception {
		if( curNode == null )
			throw new com.jmex.xml.xml.XmlException("Out of range");
		else
			return new uint(getDomNodeValue(curNode));
	}

	public uint getcount() throws Exception 
 {
		return getcountAt(0);
	}

	public void removecountAt(int index) {
		removeDomChildAt(Attribute, null, "count", index);
	}

	public void removecount() {
		removecountAt(0);
	}

	public org.w3c.dom.Node addcount(uint value) {
		if( value.isNull() )
			return null;

		return  appendDomChild(Attribute, null, "count", value.toString());
	}

	public org.w3c.dom.Node addcount(String value) throws Exception {
		return addcount(new uint(value));
	}

	public void insertcountAt(uint value, int index) {
		insertDomChildAt(Attribute, null, "count", index, value.toString());
	}

	public void insertcountAt(String value, int index) throws Exception {
		insertcountAt(new uint(value), index);
	}

	public void replacecountAt(uint value, int index) {
		replaceDomChildAt(Attribute, null, "count", index, value.toString());
	}

	public void replacecountAt(String value, int index) throws Exception {
		replacecountAt(new uint(value), index);
	}

	public static int getinputMinCount() {
		return 2;
	}

	public static int getinputMaxCount() {
		return Integer.MAX_VALUE;
	}

	public int getinputCount() {
		return getDomChildCount(Element, "http://www.collada.org/2005/11/COLLADASchema", "input");
	}

	public boolean hasinput() {
		return hasDomChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "input");
	}

	public InputLocalOffset newinput() {
		return new InputLocalOffset(domNode.getOwnerDocument().createElementNS("http://www.collada.org/2005/11/COLLADASchema", "input"));
	}

	public InputLocalOffset getinputAt(int index) throws Exception {
		return new InputLocalOffset(getDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "input", index));
	}

	public org.w3c.dom.Node getStartinginputCursor() throws Exception {
		return getDomFirstChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "input" );
	}

	public org.w3c.dom.Node getAdvancedinputCursor( org.w3c.dom.Node curNode ) throws Exception {
		return getDomNextChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "input", curNode );
	}

	public InputLocalOffset getinputValueAtCursor( org.w3c.dom.Node curNode ) throws Exception {
		if( curNode == null )
			throw new com.jmex.xml.xml.XmlException("Out of range");
		else
			return new InputLocalOffset(curNode);
	}

	public InputLocalOffset getinput() throws Exception 
 {
		return getinputAt(0);
	}

	public void removeinputAt(int index) {
		removeDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "input", index);
	}

	public void removeinput() {
		while (hasinput())
			removeinputAt(0);
	}

	public org.w3c.dom.Node addinput(InputLocalOffset value) {
		return appendDomElement("http://www.collada.org/2005/11/COLLADASchema", "input", value);
	}

	public void insertinputAt(InputLocalOffset value, int index) {
		insertDomElementAt("http://www.collada.org/2005/11/COLLADASchema", "input", index, value);
	}

	public void replaceinputAt(InputLocalOffset value, int index) {
		replaceDomElementAt("http://www.collada.org/2005/11/COLLADASchema", "input", index, value);
	}

	public static int getvcountMinCount() {
		return 0;
	}

	public static int getvcountMaxCount() {
		return 1;
	}

	public int getvcountCount() {
		return getDomChildCount(Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount");
	}

	public boolean hasvcount() {
		return hasDomChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount");
	}

	public ListOfUInts newvcount() {
		return new ListOfUInts();
	}

	public ListOfUInts getvcountAt(int index) throws Exception {
		return new ListOfUInts(getDomNodeValue(getDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount", index)));
	}

	public org.w3c.dom.Node getStartingvcountCursor() throws Exception {
		return getDomFirstChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount" );
	}

	public org.w3c.dom.Node getAdvancedvcountCursor( org.w3c.dom.Node curNode ) throws Exception {
		return getDomNextChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount", curNode );
	}

	public ListOfUInts getvcountValueAtCursor( org.w3c.dom.Node curNode ) throws Exception {
		if( curNode == null )
			throw new com.jmex.xml.xml.XmlException("Out of range");
		else
			return new ListOfUInts(getDomNodeValue(curNode));
	}

	public ListOfUInts getvcount() throws Exception 
 {
		return getvcountAt(0);
	}

	public void removevcountAt(int index) {
		removeDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount", index);
	}

	public void removevcount() {
		removevcountAt(0);
	}

	public org.w3c.dom.Node addvcount(ListOfUInts value) {
		if( value.isNull() )
			return null;

		return  appendDomChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount", value.toString());
	}

	public org.w3c.dom.Node addvcount(String value) throws Exception {
		return addvcount(new ListOfUInts(value));
	}

	public void insertvcountAt(ListOfUInts value, int index) {
		insertDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount", index, value.toString());
	}

	public void insertvcountAt(String value, int index) throws Exception {
		insertvcountAt(new ListOfUInts(value), index);
	}

	public void replacevcountAt(ListOfUInts value, int index) {
		replaceDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "vcount", index, value.toString());
	}

	public void replacevcountAt(String value, int index) throws Exception {
		replacevcountAt(new ListOfUInts(value), index);
	}

	public static int getvMinCount() {
		return 0;
	}

	public static int getvMaxCount() {
		return 1;
	}

	public int getvCount() {
		return getDomChildCount(Element, "http://www.collada.org/2005/11/COLLADASchema", "v");
	}

	public boolean hasv() {
		return hasDomChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "v");
	}

	public ListOfInts newv() {
		return new ListOfInts();
	}

	public ListOfInts getvAt(int index) throws Exception {
		return new ListOfInts(getDomNodeValue(getDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "v", index)));
	}

	public org.w3c.dom.Node getStartingvCursor() throws Exception {
		return getDomFirstChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "v" );
	}

	public org.w3c.dom.Node getAdvancedvCursor( org.w3c.dom.Node curNode ) throws Exception {
		return getDomNextChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "v", curNode );
	}

	public ListOfInts getvValueAtCursor( org.w3c.dom.Node curNode ) throws Exception {
		if( curNode == null )
			throw new com.jmex.xml.xml.XmlException("Out of range");
		else
			return new ListOfInts(getDomNodeValue(curNode));
	}

	public ListOfInts getv() throws Exception 
 {
		return getvAt(0);
	}

	public void removevAt(int index) {
		removeDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "v", index);
	}

	public void removev() {
		removevAt(0);
	}

	public org.w3c.dom.Node addv(ListOfInts value) {
		if( value.isNull() )
			return null;

		return  appendDomChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "v", value.toString());
	}

	public org.w3c.dom.Node addv(String value) throws Exception {
		return addv(new ListOfInts(value));
	}

	public void insertvAt(ListOfInts value, int index) {
		insertDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "v", index, value.toString());
	}

	public void insertvAt(String value, int index) throws Exception {
		insertvAt(new ListOfInts(value), index);
	}

	public void replacevAt(ListOfInts value, int index) {
		replaceDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "v", index, value.toString());
	}

	public void replacevAt(String value, int index) throws Exception {
		replacevAt(new ListOfInts(value), index);
	}

	public static int getextraMinCount() {
		return 0;
	}

	public static int getextraMaxCount() {
		return Integer.MAX_VALUE;
	}

	public int getextraCount() {
		return getDomChildCount(Element, "http://www.collada.org/2005/11/COLLADASchema", "extra");
	}

	public boolean hasextra() {
		return hasDomChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "extra");
	}

	public extraType newextra() {
		return new extraType(domNode.getOwnerDocument().createElementNS("http://www.collada.org/2005/11/COLLADASchema", "extra"));
	}

	public extraType getextraAt(int index) throws Exception {
		return new extraType(getDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "extra", index));
	}

	public org.w3c.dom.Node getStartingextraCursor() throws Exception {
		return getDomFirstChild(Element, "http://www.collada.org/2005/11/COLLADASchema", "extra" );
	}

	public org.w3c.dom.Node getAdvancedextraCursor( org.w3c.dom.Node curNode ) throws Exception {
		return getDomNextChild( Element, "http://www.collada.org/2005/11/COLLADASchema", "extra", curNode );
	}

	public extraType getextraValueAtCursor( org.w3c.dom.Node curNode ) throws Exception {
		if( curNode == null )
			throw new com.jmex.xml.xml.XmlException("Out of range");
		else
			return new extraType(curNode);
	}

	public extraType getextra() throws Exception 
 {
		return getextraAt(0);
	}

	public void removeextraAt(int index) {
		removeDomChildAt(Element, "http://www.collada.org/2005/11/COLLADASchema", "extra", index);
	}

	public void removeextra() {
		while (hasextra())
			removeextraAt(0);
	}

	public org.w3c.dom.Node addextra(extraType value) {
		return appendDomElement("http://www.collada.org/2005/11/COLLADASchema", "extra", value);
	}

	public void insertextraAt(extraType value, int index) {
		insertDomElementAt("http://www.collada.org/2005/11/COLLADASchema", "extra", index, value);
	}

	public void replaceextraAt(extraType value, int index) {
		replaceDomElementAt("http://www.collada.org/2005/11/COLLADASchema", "extra", index, value);
	}

}