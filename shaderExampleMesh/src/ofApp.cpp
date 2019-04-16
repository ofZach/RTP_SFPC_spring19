#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setup(640,480);
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //grabber.draw(0,0);
    
     ofMesh mesh;
     mesh.setMode(OF_PRIMITIVE_TRIANGLES);
      mesh.addVertex( ofPoint(100,100) );
    mesh.addTexCoord( grabber.getTexture().getCoordFromPercent(0, 0));
    
//    //mesh.addColor(ofColor::pink);
    mesh.addVertex(ofPoint(300,100) );
     mesh.addTexCoord( grabber.getTexture().getCoordFromPercent(0, 1));
//    //mesh.addColor(ofColor::cyan);
     mesh.addVertex(ofPoint(200,300) );
    mesh.addTexCoord( grabber.getTexture().getCoordFromPercent(1, 1));
//    //mesh.addColor(ofColor::darkRed);
    
    grabber.getTexture().bind();
    mesh.draw();
     grabber.getTexture().unbind();
    
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
