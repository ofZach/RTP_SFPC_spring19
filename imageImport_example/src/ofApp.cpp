#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    img.load("bug.jpg");
    img.resize(0.35 * img.getWidth(), 0.35 * img.getHeight());
    
    ofBackground(0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

//    ofSetColor(255);
//    img.draw(0, 0);
    
//    ofColor c = img.getColor(mouseX, mouseY);
//    ofSetColor(c);
//    ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, 50);
    
    ofSetColor(255);
    for (int x = 0; x < img.getWidth(); x += 5) {
        for (int y = 0; y < img.getHeight(); y += 5) {
            
            ofColor c = img.getColor(x, y);
            
            float b = c.getBrightness();
            
            ofSetColor(255);
            
            float mouseMaxAngle = ofMap(mouseX, 0, ofGetWidth(), 0, 2 * PI);
            float angle = ofMap(b, 0, 255, 0, mouseMaxAngle);
            
//            ofPushMatrix();
//                ofTranslate(x, y);
//                ofRotateRad(angle);
//                ofDrawLine(0 - 2.5, 0, 0 + 2.5, 0);
//            ofPopMatrix();
            
            ofDrawCircle(x, y, ofMap(b, 0, 255, 0, 5));
        }
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
