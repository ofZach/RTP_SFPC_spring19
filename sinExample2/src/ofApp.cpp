#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    // homework :)
//    float time = ofGetElapsedTimef();
//    for (int i = 0; i < 800; i++){
//         float x = ofMap(sin(time+i*0.01*mouseX), -1, 1, 0, ofGetWidth());
//        ofDrawCircle(x,i, 1);
//    }
    
    
    float time = ofGetElapsedTimef();
    float x = ofMap(sin(time), -1, 1, 0, ofGetWidth());
    ofDrawCircle(x,300, 20);
    x = ofMap(sin(time+1), -1, 1, 0, ofGetWidth());
    ofDrawCircle(x,400, 20);
    x = ofMap(sin(time+2), -1, 1, 0, ofGetWidth());
    ofDrawCircle(x,500, 20);
    
    
    
    
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
