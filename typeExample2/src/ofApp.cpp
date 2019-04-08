#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("framd.ttf", 100, true, true, true);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofEnableDepthTest();
    
    ofBackground(0);
    
    cam.begin();
    ofSetColor(255);
    //font.drawString("Muriel", 0,0);
    font.drawStringAsShapes("Muriel", 0, 0);
    ofPushMatrix();
    ofRotateY(90);
    ofSetColor(180);
    //font.drawString("Cooper", 0,0);
    font.drawStringAsShapes("Cooper", 0, 0);
    ofPopMatrix();
    cam.end();
    
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
