#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	font.load("framd.ttf", 100, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	//vector < ofPath > paths = font.getStringAsPoints("hello");
	//ofTranslate(200, 200);
	//for (int i = 0; i < paths.size(); i++) {
	//	paths[i].draw();
	//}

	ofEnableDepthTest();

	cam.enableOrtho();
	cam.begin();
	ofDrawAxis(200);

	ofSetColor(0,255,0);
	ofPushMatrix();
		ofScale(1, -1);
		vector < ofPath > paths = font.getStringAsPoints("hello");
		//ofTranslate(200, 200);
		for (int i = 0; i < paths.size(); i++) {
			paths[i].draw();
		}
	ofPopMatrix();

	ofSetColor(255,0,0);
	ofPushMatrix();
		ofRotateYDeg(90);
		ofScale(1, -1);
		vector < ofPath > paths2 = font.getStringAsPoints("world");
		//ofTranslate(200, 200);
		for (int i = 0; i < paths2.size(); i++) {
			paths2[i].draw();
		}
	ofPopMatrix();


	//font.drawString("hello", 0, 0);
	//ofSetColor(0, 255, 0);
	//ofPushMatrix();
	//ofRotateYDeg(90);
	//font.drawString("world", 0, 0);
	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
