#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(255,255,255);
    
    
    float margin = 50;
    float w = ofGetWidth() - margin*2;
    float h = ofGetHeight() - margin*2;
    
    int count = 60;
    ofSeedRandom(0);
    
    ofSetColor(0);
    for (int i = 0; i < count; i++){
        for (int j = 0; j < count; j++){
            
            float x = ofMap(i, 0, count, margin, ofGetWidth()-margin);
            float y = ofMap(j, 0, count, margin, ofGetHeight()-margin);
            
            float randomAngle = ofRandom(0,360);
            ofPushMatrix();
            ofTranslate(x,y);
            ofRotateZ(randomAngle);
            
            //if (ofRandom(0,1) < .9){
                //ofDrawLine(0-10,0, 0+10, 0);
            //}
            
            
            if (ofNoise(i*.03, j*.03, mouseX*0.01) < 0.95){
                ofDrawLine(0-10,0, 0+10, 0);
            }
            
            ofPopMatrix();
            
            //ofDrawCircle(x,y,3);
            
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
