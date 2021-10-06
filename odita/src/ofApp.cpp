#include "ofApp.h"

bool sortDescending(int i, int j) { return (j < i); }

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowShape(1280, 720);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float w = ofGetWidth()/2;
	float h = ofGetHeight();
	int numb = 20;
	int numbColors = 5;
	

	vector < ofColor > colors;
	ofColor c1, c2, c3, c4, c5, c6, c7, c8;
	c1.setHex(0x956FA6); c2.setHex(0x405045); c3.setHex(0xBF863F); c4.setHex(0xBF5934); 
	c5.setHex(0xBF3434); c6.setHex(0x8295B3); c7.setHex(0x526182); c8.setHex(0xD6B75D);
	colors.push_back(c1); colors.push_back(c2); colors.push_back(c3); colors.push_back(c4); 
	colors.push_back(c5); colors.push_back(c6); colors.push_back(c7); colors.push_back(c8);


	
	vector < float > aLeft;
	vector < float > aRight;
	vector < float > bLeft;
	vector < float > bRight;

	
	
	ofSeedRandom(1);
	for (int i = 0; i < numb; i++) {
		float randomNumber = ofRandomHeight();
		aLeft.push_back(randomNumber);
		aLeft.push_back(h);
	}

	ofSeedRandom(4);
	for (int i = 0; i < numb; i++) {
		float randomNumber = ofRandomHeight();
		aRight.push_back(randomNumber);
		aRight.push_back(h);
	}

	ofSeedRandom(3);
	for (int i = 0; i < numb; i++) {
		float randomNumber = ofRandomHeight();
		bLeft.push_back(randomNumber);
		bLeft.push_back(h);
	}

	ofSeedRandom(6);
	for (int i = 0; i < numb; i++) {
		float randomNumber = ofRandomHeight();
		bRight.push_back(randomNumber);
		bRight.push_back(h);
	}
	
	ofSort(aLeft, sortDescending);
	ofSort(aRight, sortDescending);
	ofSort(bLeft, sortDescending);
	ofSort(bRight, sortDescending);


	ofSeedRandom(0);
	ofRandomize(colors);
	for (int i = 0; i < aLeft.size(); i++) {
		float adder = 100 * ofRandom(1);
		float offsetLeft = sin(ofGetElapsedTimef() * 0.5);
		float offsetRight = sin(ofGetElapsedTimef() * 0.8);

		ofVec3f p1(0, aLeft[i] + adder * offsetLeft);
		ofVec3f p2(w, aRight[i] + adder * offsetRight);
		ofVec3f p3(0, 0);
		ofVec3f p4(w, 0);


		ofPath aLine;
		aLine.lineTo(p1);
		aLine.lineTo(p2);
		aLine.lineTo(p4);
		aLine.lineTo(p3);
		aLine.lineTo(p1);
		aLine.setFillColor(colors[i % colors.size()]);

		aLine.draw();
	}

	ofRandomize(colors);
	for (int i = 0; i < bLeft.size(); i++) {
		float adder = 100 * ofRandom(1);
		float offsetLeft = sin(ofGetElapsedTimef() * 0.3);
		float offsetRight = sin(ofGetElapsedTimef() * 0.7);

		ofVec3f p1(w, bLeft[i] + adder * offsetLeft);
		ofVec3f p2(w * 2, bRight[i] + adder * offsetRight);
		ofVec3f p3(w, 0);
		ofVec3f p4(w*2, 0);


		ofPath bLine;
		bLine.lineTo(p1);
		bLine.lineTo(p2);
		bLine.lineTo(p4);
		bLine.lineTo(p3);
		bLine.lineTo(p1);
		bLine.setFillColor(colors[i % colors.size()]);

		bLine.draw();
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
