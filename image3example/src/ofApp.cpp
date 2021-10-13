#include "ofApp.h"

void ofApp::dilate(ofImage& img1, ofImage& img2) {
	// assumptions:
	// img1/img2 same w/h
	// both greyscale/binary images
	for (int i = 0; i < img1.getWidth(); i++) {
		for (int j = 0; j < img1.getHeight(); j++) {
			// neighbors
			// edges conditions, repeats if on edge using ofClamp

			int i_m_1 = ofClamp(i - 1, 0, img1.getWidth() - 1);;
			int i_p_1 = ofClamp(i + 1, 0, img1.getWidth() - 1);;
			int j_m_1 = ofClamp(j - 1, 0, img1.getHeight() - 1);;
			int j_p_1 = ofClamp(j + 1, 0, img1.getHeight() - 1);;

			// neighbor values

			ofColor n_ = img1.getColor(i, j_p_1);
			ofColor ne = img1.getColor(i_p_1, j_p_1);
			ofColor e_ = img1.getColor(i_p_1, j);
			ofColor se = img1.getColor(i_p_1, j_m_1);
			ofColor s_ = img1.getColor(i, j_m_1);
			ofColor sw = img1.getColor(i_m_1, j_m_1);
			ofColor w_ = img1.getColor(i_m_1, j);
			ofColor nw = img1.getColor(i_m_1, j_p_1);

			if (n_.getBrightness() > 127 ||
				ne.getBrightness() > 127 ||
				e_.getBrightness() > 127 ||
				se.getBrightness() > 127 ||
				s_.getBrightness() > 127 ||
				sw.getBrightness() > 127 ||
				w_.getBrightness() > 127 ||
				nw.getBrightness() > 127) {
				img2.setColor(i, j, ofColor(255));
			}
			else {
				img2.setColor(i, j, ofColor(0));
			}
		}
	}
	img2.update();
}


//--------------------------------------------------------------
void ofApp::setup(){
	tupac.load("2pac.jpg");
	tupac.setImageType(OF_IMAGE_GRAYSCALE);

	tupac2.allocate(tupac.getWidth(), 
		tupac.getHeight(), 
		OF_IMAGE_GRAYSCALE);

	tupac3.allocate(tupac.getWidth(), 
		tupac.getHeight(), 
		OF_IMAGE_GRAYSCALE);


	for (int i = 0; i < tupac.getWidth(); i++) {
		for (int j = 0; j < tupac.getHeight(); j++) {
			ofColor c = tupac.getColor(i, j);
			if (c.getBrightness() > 127) {
				tupac2.setColor(i, j, ofColor(255));
			}
			else {
				tupac2.setColor(i, j, ofColor(0));
			}
		}
	}

	tupac2.update();
	
	dilate(tupac2, tupac3);
}

//--------------------------------------------------------------
void ofApp::update(){
	dilate(tupac3, tupac2);
	dilate(tupac2, tupac3);
}

//--------------------------------------------------------------
void ofApp::draw(){
	//ofScale(0.3, 0.3);
	
	tupac.draw(0, 0);
	//tupac2.draw(tupac.getWidth(), 0);
	tupac3.draw(tupac.getWidth(), 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	for (int i = 0; i < tupac.getWidth(); i++) {
		for (int j = 0; j < tupac.getHeight(); j++) {
			ofColor c = tupac.getColor(i, j);
			if (c.getBrightness() > 127) {
				tupac2.setColor(i, j, ofColor(255));
			}
			else {
				tupac2.setColor(i, j, ofColor(0));
			}
		}
	}
	tupac2.update();
	dilate(tupac2, tupac3);
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
