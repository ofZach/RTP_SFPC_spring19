#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    
    ofDirectory dir;
    dir.listDir("cats");
    for (int i = 0; i < dir.size(); i++){
        //cout << dir.getPath(i) << endl;
        ofImage temp;
        images.push_back(temp);
        images.back().load(dir.getPath(i));
    }
    
    avg.allocate(images[0].getWidth(),
                 images[0].getHeight(), OF_IMAGE_COLOR);
    
    // disneyland
    for (int i = 0; i < images[0].getWidth(); i++){
        for (int j = 0; j < images[0].getHeight(); j++){
            float totalr = 0;
            float totalg = 0;
            float totalb = 0;
            for (int k =0; k < images.size(); k++){
                ofColor color = images[k].getColor(i,j);
                float r = color.r;
                float g = color.g;
                float b = color.b;
                totalr += r;
                totalg += g;
                totalb += b;
            }
            totalr /= (float)images.size();
            totalg /= (float)images.size();
            totalb /= (float)images.size();
            
            avg.setColor(i,j, ofColor(totalr, totalg, totalb));
        }
    }
    avg.update();
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //images[ ofGetFrameNum() % images.size()].draw(0,0);
    avg.draw(0,0);
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
