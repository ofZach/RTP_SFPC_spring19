#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < 300; i++){
        for (int j = 0; j < 300; j++){
            float val = ofNoise(i*0.01, j*0.01);
            ofSetColor(ofMap(val, 0, 1, 0, 255));
            ofDrawRectangle(i*3, j*3, 3,3);
        }
    }
    
//    for (int i = 0; i < 300; i++){
//        for (int j = 0; j < 300; j++){
//            float val = ofNoise(i*0.01, j*0.01, mouseX*0.01);
//            ofSetColor(255);
//            if (val > .9) ofDrawRectangle(i*3, j*3, 3,3);
//        }
//    }
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
