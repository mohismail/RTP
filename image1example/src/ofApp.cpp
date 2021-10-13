#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	img.load("2pac.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofBackground(0);
	ofSetLineWidth(2);

	for (int i = 0; i < img.getWidth(); i += 10) {
		for (int j = 0; j < img.getHeight(); j+=10) {
			ofColor color = img.getColor(i, j);
			
			float brightness = color.getBrightness();
			float radius = ofMap(brightness, 0, 255, 2, 5);
			
			//ofSetColor(255);
			////ofSetColor(color);
			//ofDrawCircle(i, j, radius);

			ofPushMatrix();
			ofTranslate(i, j);
			ofRotateZDeg(ofMap(brightness, 0, 255, 0, mouseX)); //can also max out at an angle value
			ofDrawLine(0 - 5, 0, 0 + 5, 0);
			ofPopMatrix();
		}
	}
	
	ofSetColor(255);
	img.draw(500, 0);
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
