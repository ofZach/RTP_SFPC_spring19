#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    grabber.setup(1280,720);
    tracker.setup();
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    
    // Update tracker when there are new frames
    if(grabber.isFrameNew()){
        tracker.update(grabber);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    //grabber.draw(0,0);
    //tracker.drawDebug();
    
    if (tracker.size() > 0){
        ofPolyline left = tracker.getInstances()[0].getLandmarks().getImageFeature(ofxFaceTracker2Landmarks::LEFT_EYE);
        
        ofPolyline right = tracker.getInstances()[0].getLandmarks().getImageFeature(ofxFaceTracker2Landmarks::RIGHT_EYE);
        //left.draw();
        ofPoint midLeft;
        for (int i = 0; i < left.size(); i++){
            midLeft += left[i];
        }
        midLeft /= (float)left.size();
        ofDrawCircle(midLeft, 10);
        
        ofPoint midRight;
        for (int i = 0; i < right.size(); i++){
            midRight += right[i];
        }
        midRight /= (float)right.size();
        ofDrawCircle(midRight, 10);
        //ofLine(midRight, midLeft);
        
        float distance = (midRight-midLeft).length();
        ofPoint diff = (midRight-midLeft);
        float angle = atan2(diff.y, diff.x);
        
        float scale = 200.0 / distance;
        grabber.setAnchorPoint(midLeft.x, midLeft.y);
        ofPushMatrix();
        ofTranslate(mouseX, mouseY);
        ofScale(scale, scale);
        ofRotateZ(-angle*RAD_TO_DEG);
        grabber.draw(0,0);
        ofPopMatrix();
        
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
