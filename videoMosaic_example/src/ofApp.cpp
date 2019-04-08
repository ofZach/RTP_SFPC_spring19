#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    webcam.setup(500, 300);
    
    ofBackground(0);
    
    gui.setup();
    gui.add(slider1.set("rotation", 0.5, 0, 2 * PI));
    
}

//--------------------------------------------------------------
void ofApp::update(){

    webcam.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    for (int x = 0; x < webcam.getWidth(); x += 10) {
        for (int y = 0; y < webcam.getHeight(); y += 10) {
            
            ofColor c = webcam.getPixels().getColor(x, y);
            
            float b = c.getBrightness();
            
            ofSetColor(255);
            
            float mouseMaxAngle = ofMap(mouseX, 0, ofGetWidth(), 0, 2 * PI);
//            float angle = ofMap(b, 0, 255, 0, mouseMaxAngle);
            float angle = ofMap(b, 0, 255, 0, slider1);
            
            ofPushMatrix();
                ofTranslate(x, y);
                ofRotateRad(angle);
                ofDrawLine(0 - 5, 0, 0 + 5, 0);
            ofPopMatrix();
            
//            ofDrawCircle(x, y, ofMap(b, 0, 255, 0, 5));
        }
    }
    
    gui.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

    if (key == ' ') {
        slider1 = ofRandom(0, 2 * PI);
    }
    
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
