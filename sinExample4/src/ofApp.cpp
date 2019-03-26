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
    
    // since cos and sin are based on circles
    // we can move stuff in a circular motion
    // based on them.
    
    // x = xorig + rad * cos(angle)
    // y = yorig + rad * sin(angle);
    
    float xOrig = 400;
    float yOrig = 400;
    float radius = 100;
    float angle = ofGetElapsedTimef();
    
    float x = xOrig + radius * cos(angle);
    float y = yOrig + radius * sin(angle);
    ofDrawCircle(x,y,10);
    
    line.addVertex(x,y);
    if (line.size() > 200){
        line.getVertices().erase(line.getVertices().begin());
    }
    line.draw();
    
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
