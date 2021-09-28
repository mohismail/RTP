#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	font.load("arialbd.ttf", 150, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 242, 226);
	ofEnableDepthTest();

	cam.enableOrtho();
	cam.begin();
	
	ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
	float alpha = 255;

	string word = "MURIEL";
	ofRectangle rect = font.getStringBoundingBox(word,0,0);

	vector < ofColor > txtColors;
	txtColors.push_back(ofColor(253, 227, 88, alpha));	txtColors.push_back(ofColor(253, 227, 88, alpha));
	txtColors.push_back(ofColor(255, 182, 150, alpha));	txtColors.push_back(ofColor(255, 182, 150, alpha));
	txtColors.push_back(ofColor(129, 187, 237, alpha));	txtColors.push_back(ofColor(129, 187, 237, alpha));

	float offset = (300 - mouseY) * 0.1;

	for (int i = 0; i < txtColors.size(); i++) {
		ofSetColor(txtColors[i]);
		ofPushMatrix();
		ofScale(1, -1);
		vector < ofPath > paths = font.getStringAsPoints(word);
		ofTranslate(-rect.getWidth() / 2, (rect.getHeight() / 2) + offset * i, abs(offset * i) + 1);
		for (int j = 0; j < paths.size(); j++) {
			paths[j].draw();
		}
		ofPopMatrix();
	}


	cam.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'r') { cam.reset(); }
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
