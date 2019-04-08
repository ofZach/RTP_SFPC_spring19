#include "ofApp.h"

void ofApp::dilateImage(ofImage & src, ofImage & dst){
    
    // we assume that src and dst have same size...
    // also they are greyscale
    
    for (int i = 0; i < src.getWidth(); i++){
        for (int j = 0; j < src.getHeight(); j++){
            ofColor me = src.getColor(i,j);
            
            if (me.getBrightness() < 127){
                ofColor se = src.getColor(ofClamp(i+1,0, src.getWidth()-1),
                                          ofClamp(j+1, 0, src.getHeight()-1));
                ofColor e =  src.getColor(ofClamp(i+1,0, src.getWidth()-1),
                                          ofClamp(j, 0, src.getHeight()-1));
                ofColor ne = src.getColor(ofClamp(i+1,0, src.getWidth()-1),
                                          ofClamp(j-1, 0, src.getHeight()-1));
                ofColor n = src.getColor(ofClamp(i,0, src.getWidth()-1),
                                         ofClamp(j-1, 0, src.getHeight()-1));
                ofColor nw = src.getColor(ofClamp(i-1,0, src.getWidth()-1),
                                          ofClamp(j-1, 0, src.getHeight()-1));
                ofColor w = src.getColor(ofClamp(i-1,0, src.getWidth()-1),
                                         ofClamp(j, 0, src.getHeight()-1));
                ofColor sw = src.getColor(ofClamp(i-1,0, src.getWidth()-1),
                                          ofClamp(j+1, 0, src.getHeight()-1));
                ofColor s = src.getColor(ofClamp(i,0, src.getWidth()-1),
                                         ofClamp(j+1, 0, src.getHeight()-1));
                if (se.getBrightness() > 127 ||
                    e.getBrightness() > 127 ||
                    ne.getBrightness() > 127 ||
                    n.getBrightness() > 127 ||
                    nw.getBrightness() > 127 ||
                    w.getBrightness() > 127 ||
                    sw.getBrightness() > 127 ||
                    s.getBrightness() > 127 ){
                    
                    me = ofColor::white;
                }
            }
            
            dst.setColor(i,j, me);
            
        }
    }
    
    
}

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(10);
    
    imgA.load("bug&me.jpg");
    imgA.setImageType(OF_IMAGE_GRAYSCALE);
    imgA.resize(0.1 * imgA.getWidth(), 0.1 * imgA.getHeight());
    // threshold...
    for (int i = 0; i < imgA.getWidth(); i++){
        for (int j = 0; j < imgA.getHeight(); j++){
            if (imgA.getColor(i,j).getBrightness() > 127){
                imgA.setColor(i,j, ofColor::white);
            } else {
                imgA.setColor(i,j, ofColor::black);
            }
        }
    }
    imgA.update();
    
    imgB.allocate(imgA.getWidth(), imgA.getHeight(),OF_IMAGE_GRAYSCALE);
    imgC.allocate(imgA.getWidth(), imgA.getHeight(),OF_IMAGE_GRAYSCALE);
    
//    img.load("bug&me.jpg");
//    img.resize(0.2 * img.getWidth(), 0.2 * img.getHeight());
//    img.setImageType(OF_IMAGE_GRAYSCALE);
//
//    img2.allocate(img.getWidth(), img.getHeight(), OF_IMAGE_GRAYSCALE);
}

//--------------------------------------------------------------
void ofApp::update(){
    dilateImage(imgA, imgB);
    dilateImage(imgB, imgA);
    
    imgB.update();
    
    if (ofGetFrameNum() % 10 == 0) {
        dilateImage(imgA, imgC);
        dilateImage(imgC, imgA);
        imgC.update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    imgA.draw(0,0);
    imgB.draw(imgA.getWidth(), 0);
    imgC.draw(0, imgA.getHeight());
//    img.draw(0, 0);
    
//    for (int i = 1; i < img.getWidth() - 1; i++) {
//        for (int j = 1; j < img.getHeight() - 1; j++) {
//
//            int me = img.getColor(i, j).getBrightness();
//
//            // if you want things to switch between 1 and -1
//            // pow(-1, input_integer)
//
//int n  = img.getColor(i    , j - 1).getBrightness();
//int ne = img.getColor(i + 1, j - 1).getBrightness();
//int e  = img.getColor(i + 1, j    ).getBrightness();
//int se = img.getColor(i + 1, j + 1).getBrightness();
//int s  = img.getColor(i    , j + 1).getBrightness();
//int sw = img.getColor(i - 1, j + 1).getBrightness();
//int w  = img.getColor(i - 1, j    ).getBrightness();
//int nw = img.getColor(i - 1, j - 1).getBrightness();
//
//            if (n < 127  ||
//                ne < 127 ||
//                e < 127  ||
//                se < 127 ||
//                s < 127  ||
//                sw < 127 ||
//                w < 127  ||
//                nw < 127) {
//                img2.setColor(i, j, 0);
//            } else {
//                img2.setColor(i, j, 255);
//            }
//
//        }
//    }
//
//    img2.draw(0, 0);
    
    
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
