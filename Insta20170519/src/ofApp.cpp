#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofSetFrameRate(30);
	ofSetWindowTitle("noise");

	x_noise_r = ofRandom(10);
	y_noise_r = ofRandom(10);

	x_noise_g = ofRandom(10);
	y_noise_g = ofRandom(10);

	x_noise_b = ofRandom(10);
	y_noise_b = ofRandom(10);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofEnableBlendMode(OF_BLENDMODE_ADD);

	float tmp_x_noise_r = x_noise_r;
	float tmp_y_noise_r = y_noise_r;

	float tmp_x_noise_g = x_noise_g;
	float tmp_y_noise_g = y_noise_g;

	float tmp_x_noise_b = x_noise_b;
	float tmp_y_noise_b = y_noise_b;

	float noise_step = 0.05;

	ofColor c;

	int span = 16;
	int size = 12;
	
	for (int x = ofGetWidth(); x > -span; x -= span){
		tmp_x_noise_r += noise_step;
		tmp_y_noise_r = y_noise_r;

		tmp_x_noise_g += noise_step;
		tmp_y_noise_g = y_noise_g;

		tmp_x_noise_b += noise_step;
		tmp_y_noise_b = y_noise_b;
		
		for (int y = ofGetHeight(); y > -span; y -= span) {
			float noise_value_r = ofNoise(tmp_x_noise_r, tmp_y_noise_r, ofGetFrameNum() * noise_step);
			if (noise_value_r > 0.5) {
				c = ofColor(noise_value_r * 255, 0, 0);
				ofSetColor(c);
				ofEllipse(x, y, size, size);
			}
			tmp_y_noise_r += noise_step;

			float noise_value_g = ofNoise(tmp_x_noise_g, tmp_y_noise_g, ofGetFrameNum() * noise_step);
			if (noise_value_g > 0.5) {
				c = ofColor(0, noise_value_g * 255, 0);
				ofSetColor(c);
				ofEllipse(x, y, size, size);
			}
			tmp_y_noise_g += noise_step;

			float noise_value_b = ofNoise(tmp_x_noise_b, tmp_y_noise_b, ofGetFrameNum() * noise_step);
			if (noise_value_b > 0.5) {
				c = ofColor(0, 0, noise_value_b * 255);
				ofSetColor(c);
				ofEllipse(x, y, size, size);
			}
			tmp_y_noise_b += noise_step;
		}
	}

	//x_noise_r += noise_step;
	//y_noise_r += noise_step;

	//x_noise_g += noise_step;
	//y_noise_g += noise_step;

	//x_noise_b += noise_step;
	//y_noise_b += noise_step;
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
