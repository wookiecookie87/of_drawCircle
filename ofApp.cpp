#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	theta = 180;
	maxRadius = 300;
	val = 0;
	ptX = 0;
	ptY = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
	if (theta < 180) {
		theta += 1;
	}
	
	r = maxRadius * sin(PI * theta / 180);
	
}



//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(0);
	for (int i = 0; i < pos.size(); i++) {
		ofSetColor(circleColors[i]);
		ofDrawCircle(pos[i], radius[i]);
		//ofDrawCircle(pos[i], r);
	}
	if (bDraw) {
		ofSetColor(circleColor);
		ofDrawCircle(ptX, ptY, r);
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
	//r = ofDist(ptX, ptY, x, y);
	//bDraw = true;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	circleColor = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
	theta = 0;
	ptX = x;
	ptY = y;

	bDraw = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	
	circleColors.push_back(circleColor);
	pos.push_back(ofPoint(ptX, ptY));
	radius.push_back(r);

	bDraw = false;
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
