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

    ofBackground(0);
    //font.drawString("helloWorljd", 300,300);
//    ofRectangle rect = font.getStringBoundingBox("helloWorljd", 300,300);
//
//    ofNoFill();
//    ofDrawRectangle(rect);
    
    //ofDrawCircle(300,300,10);
    
    
    //int pos[100]; [] << array!
    //pos[101] // no way!
    //vector -- growable array
    //vector < .. >  // templates
//    vector < int > pos;
//    pos.push_back(10);
//    pos.size()
//
    
    
    ofTranslate(300,300);
    vector < ofPath > paths = font.getStringAsPoints("hello");
    for (int i = 0; i < paths.size(); i++){
        vector < ofPolyline > lines = paths[i].getOutline();
        for (int j = 0; j < lines.size(); j++){
            
            ofPolyline line =  lines[j];
            line = line.getResampledBySpacing(3);
            //line = line.getSmoothed(mouseX);
//            vector < ofPoint > pts = line.getVertices();
//            for (int k = 0; k < pts.size(); k++){
//                ofDrawCircle(pts[k], 1);
//            }
            
            // copy or reference
            
//            vector < ofPoint > pts = line.getVertices();
            vector < ofPoint > & pts = line.getVertices();
            for (int k = 0; k < pts.size(); k++){
                pts[k].x += ofRandom(-mouseX, mouseX);
                pts[k].y += ofRandom(-mouseY, mouseY);

            }
            line.draw();
            //lines[j].draw();
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
