#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	tupac.load("2pac4.jpg");
	font.load("lucon.ttf", 20, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofScale(1.5,1.5);
	ofBackground(0);
	//cam.begin();

	std::string lyrics = "I see no changes, all I see is racist faces \
		Misplaced hate makes disgrace to races \
		We under, I wonder what it takes to make this \
		One better place, let's erase the wasted \
		Take the evil out the people, they'll be actin' right \
		'Cause both black and white are smokin' crack tonight \
		And the only time we chill is when we kill each other(Kill each other) \
		It takes skill to be real, time to heal each other \
		And although it seems heaven - sent \
		We ain't ready to see a black president, uh (Oh-ooh) \
		It ain't a secret, don't conceal the fact \
		The penitentiary's packed and it's filled with blacks \
		But some things will never change(Never change) \
		Try to show another way, but you stayin' in the dope game (Ooh) \
		Now tell me, what's a mother to do? \
		Bein' real don't appeal to the brother in you(Yeah) \
		You gotta operate the easy way \
		‘I made a G today, ’ but you made it in a sleazy way \
		Sellin' crack to the kids (Oh-oh), ‘I gotta get paid’ (Oh) \
		(Come on, come on) \
		That's just the way it is (Changes) \
		Things'll never be the same \
		That's just the way it is (That's the way it is, what ? ) \
		Aww, yeah(Hear me) \
		(Oh my, oh my, come on, come on) \
		That's just the way it is (That's just the way it is, the way it is) \
		Things'll never be the same \
		(Never be the same, yeah, yeah, yeah, aww, yeah) \
		That's just the way it is (Way it is) \
		Aww, yeah(Aww, yeah, aww, yeah) \
		We gotta make a change \
		It's time for us as a people to start makin' some changes \
		Let's change the way we eat \
		Let's change the way we live \
		And let's change the way we treat each other \
		You see, the old way wasn't workin' \
		So it's on us to do what we gotta do to survive \
		And still I see no changes, can't a brother get a little peace? \
		It's war on the streets and the war in the Middle East (Ooh, yeah) \
		Instead of war on poverty \
		They got a war on drugs so the police can bother me \
		And I ain't never did a crime I ain't have to do \
		But now I'm back with the facts, givin' it back to you(Ooh) \
		Don't let 'em jack you up, back you up \
		Crack you upand pimp - smack you up \
		You gotta learn to hold your own \
		They get jealous when they see you with your mobile phone \
		But tell the cops they can't touch this \
		I don't trust this, when they try to rush, I bust this \
		That's the sound of my tool, you say it ain't cool \
		My mama didn't raise no fool (Oh) \
		And as long as I stay black, I gotta stay strapped \
		And I never get to lay back \
		'Cause I always got to worry 'bout the payback \
		Some buck that I roughed up way back \
		Comin' back after all these years \
		‘Rat - a - tat - tat - tat - tat, ’ that's the way it is \
		That's just the way it is (Just the way it is, yeah, yeah, yeah) \
		Things'll never be the same (Yeah) \
		That's just the way it is (The way it is) \
		Aww, yeah(Some things will never change, oh my) \
		(I'm tryna make a change) \
		(You're my brother, you're my sister, yeah) \
		That's just the way it is (The way it is, the way it is) \
		Things'll never be the same (You're my brother, you're my sister) \
		That's just the way it is, aww, yeah \
		Some things'll never change";

	int l = 0;

	for (int i = 0; i < tupac.getHeight(); i += 10) {
		for (int j = 0; j < tupac.getWidth(); j += 10) {
			float pct = ofClamp(ofGetElapsedTimef()*0.15-1, 0, 1);

			ofColor color = tupac.getColor(j, i);
			float brightness = color.getBrightness();
			float shade = ofMap(brightness, 0, 255, 50, 255);

			char letterChar = lyrics[l];
			std::string letter(1, letterChar);
			ofRectangle rect = font.getStringBoundingBox(letter, 0, 0);

			std::string str = std::to_string(l);

			float scaleX = ofMap(brightness * pct, 0, 255, 0.5, 1);
			float scaleY = scaleX * 0.5;

			ofPushMatrix();
				ofSetColor(shade);
				//ofSetColor(255);
				//ofScale(1, -1);
				//ofTranslate(j + (scaleX * (rect.getWidth())), i + (scaleY * (rect.getHeight())));
				ofTranslate(j, i);
				ofTranslate(0, (scaleY * (rect.getHeight())));
				ofScale(scaleX, scaleY);
				font.drawString(letter, 0, 0);
			
				//ofTranslate(i + (rect.getWidth() / 2), j + (rect.getHeight()));
				//vector < ofPath > paths = font.getStringAsPoints(letter);
				//for (int k = 0; k < paths.size(); k++) {
				//	//paths[k].scale(scaleX, scaleY);
				//	paths[k].draw();
				//}
			ofPopMatrix();
			l++;
			
			////ofSetColor(color);
			//ofSetColor(255);
			//ofDrawCircle(i, j, radius);

			//ofPushMatrix();
			//ofTranslate(i, j);
			//ofRotateZDeg(ofMap(brightness, 0, 255, 0, mouseX)); //can also max out at an angle value
			//ofDrawLine(0 - 5, 0, 0 + 5, 0);
			//ofPopMatrix();
		}
	}

	ofSetColor(255);
	tupac.draw(tupac.getWidth(), 0);
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
