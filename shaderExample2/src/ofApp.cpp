#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setup(1280,720);
    shader.load("", "shader.frag");
    img.load("image.png");
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    if (ofGetFrameNum() % 60 == 0){
        shader.load("", "shader.frag");
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetCircleResolution(100);
    
    shader.begin();
    shader.setUniform1f("time", ofGetElapsedTimef());
    shader.setUniform2f("mouse", mouseX, ofGetHeight()-mouseY);
    shader.setUniformTexture("img", grabber.getTexture(), 0);
    ofSetColor(ofColor::pink);
    //ofDrawCircle(200,200,100);
    ofDrawRectangle(0,0,ofGetWidth(), ofGetHeight());
    shader.end();
    
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
