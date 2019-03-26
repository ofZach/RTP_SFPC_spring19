#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    angle = 0;
    angleChange = (440.0*TWO_PI) / 44100.0;
    
    
    soundStream.setup(this, 1,0,44100, 512, 4);
    
}



void ofApp::audioOut(float * input, int bufferSize, int nChannels){
    
    for (int i = 0; i < bufferSize; i++){
        angle = angle + angleChange;
        input[i] = sin(angle)*0.1;
    }
    
}


//--------------------------------------------------------------
void ofApp::update(){

    
    angleChange = (mouseX*TWO_PI) / 44100.0;
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

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
