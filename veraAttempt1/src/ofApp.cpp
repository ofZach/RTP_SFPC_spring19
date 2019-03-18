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
    
    //ofSetRectMode(OF_RECTMODE_CENTER);
    ofNoFill();
    ofSetColor(0,0,0);
    
    ofSeedRandom(mouseX*1000);
    
    //cout << mouseX * 1000 << endl;
    
    
    float margin = 50;
    float w = ofGetWidth() - margin*2;
    float h = ofGetHeight() - margin*2;
    float stepw = w/5.;
    float steph = h/5.;
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
//            ofDrawRectangle(margin + i*stepw,
//                            margin + j*steph,
//                            stepw,
//                            steph
//                            );
//            ofDrawCircle(margin + i*stepw + stepw/2,
//                         margin + j*steph + steph/2,
//                         10);
            float x = margin + i*stepw + stepw/2;
            float y = margin + j*steph + steph/2;
            for (int k = 0; k < 10; k++){
                float w = ofMap(k, 0, 9, stepw*0.1, stepw*0.95 );
                float h = ofMap(k, 0, 9, steph*0.1, steph*0.95 );
                
                if (ofRandom(0,1) < .97){
                    ofDrawRectangle(x, y, w, h);
                }
            }
        }
    }
    
//    for (int i = 0; i < 10; i++){
//
//        if (ofRandom(0,1) < .9){
//            ofDrawRectangle(400,400, 5 + i * 10, 5 + i * 10);
//        }
//
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
