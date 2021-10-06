#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//ofSeedRandom(0);
	//for (int i = 0; i < 100; i++) {
	//	cout << ofRandom(0, 100) << endl;
	//}
 
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0, 0, 0);
	
	
	//ofSeedRandom(mouseX);
	//for (int i = 0; i < 800; i++) { 
	//	ofDrawCircle(i, 400 + ofRandom(-100,100), 2); 
	//}
	//

	//for (int i = 0; i < 800; i++) {
	//	ofDrawCircle(i, 400 + ofSignedNoise(i * 0.03 + mouseX*0.1)*100,2);
	//}

	//for (int i = 0; i < 800; i++) {
	//	ofDrawCircle(i, 400 + ofSignedNoise(i * 0.03, mouseX * 0.1) * 100, 2);
	//}
	//

	//for (int i = 0; i < 80; i++) {
	//	for (int j = 0; j < 80; j++) {
	//		ofSetColor(ofRandom(0, 255));
	//		ofDrawRectangle(i * 10, j * 10, 10, 10);
	//	}
	//}

	//float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 1.0);
	//for (int i = 0; i < 80; i++) {
	//	for (int j = 0; j < 80; j++) {
	//		ofSetColor(ofNoise(i*scale, j*scale)*255);
	//		ofDrawRectangle(i * 10, j * 10, 10, 10);
	//	}
	//}

	for (int i = 0; i < 80; i++) {
		for (int j = 0; j < 80; j++) {
			ofSetColor(ofNoise(i * 0.03, j * 0.03, mouseX*0.1) * 255);
			ofDrawRectangle(i * 10, j * 10, 10, 10);
		}
	}
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
