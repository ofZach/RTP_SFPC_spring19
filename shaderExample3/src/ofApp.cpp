#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    fbo.allocate(ofGetWidth(),ofGetHeight(), GL_RGBA, 4);
    grabber.setup(1280,720);
    shader.load("", "shader.frag");
    img.load("rock.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    ofSeedRandom(ofGetSeconds());
    fbo.begin();
    ofClear(255,255,255, 255);
    ofSetColor(0);
//    for (int i = 0; i < 30; i++){
//        ofLine(ofRandom(0,500),
//               ofRandom(0,500),
//               ofRandom(0,500),
//               ofRandom(0,500));
//    }
    for (int i = 0; i < 30; i++){
        ofFill();
        ofSetColor(i % 2 == 0 ? 0 : 255);
        ofDrawCircle(mouseX, mouseY,300 - i * 10);
        
    }
    fbo.end();
    
    
//    grabber.update();
    if (ofGetFrameNum() % 60 == 0){
        shader.load("", "shader.frag");
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    //fbo.draw(mouseX, mouseY);
    
    
    ofSetCircleResolution(1000);
    
    shader.begin();
    shader.setUniform1f("time", ofGetElapsedTimef());
     shader.setUniform1f("height", ofGetHeight());
    shader.setUniform2f("mouse", mouseX, ofGetHeight()-mouseY);
    shader.setUniformTexture("rock", img.getTexture(), 0);
    shader.setUniformTexture("lines", fbo.getTexture(), 1);
    ofSetColor(ofColor::pink);
    ofDrawRectangle(0,0,ofGetWidth(), ofGetHeight());
    shader.end();
//
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
