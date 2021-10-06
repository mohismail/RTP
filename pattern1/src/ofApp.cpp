#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//cout << ofGetFrameNum() % 5 << endl;

	//for (int y = 0; y < 20; y++) {
	//	for (int x = 0; x < 20; x++) {
	//		ofDrawCircle(x * 40 + 100, y * 40 + 100, 10);
	//	}
	//	
	//}

	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 20; x++) {
			int offset = y;
			//int modVal = (y % 5)+1;

			if ((x+offset) % 4 < 2) {
				ofSetColor(255);
			}
			else {
				ofSetColor(0);
			}
			ofDrawCircle(x * 40 + 100, y * 40 + 100, 10);
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
