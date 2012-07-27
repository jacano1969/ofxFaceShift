#include "ofApp.h"

void ofApp::setup() {
	ofSetVerticalSync(true);
	faceShift.setup();
}

void ofApp::update() {
	faceShift.update();
}

void ofApp::draw(){
	ofBackground(0);
	ofColor(255);
	ofNoFill();
	int n = faceShift.getExpressionCount();
	for(int i = 0; i < n; i++) {
		float weight = faceShift.getExpressionWeight(i);
		string name = faceShift.getExpressionName(i);
		ofRect(0, 0, weight * 100, 10);
		ofDrawBitmapString(name, weight * 100, 10);
		ofTranslate(0, 10);
	}
}