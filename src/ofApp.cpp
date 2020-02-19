#include "ofApp.h"
 int degrees = 0;
int x;
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetBackgroundColor(255, 255, 255);
}

//--------------------------------------------------------------
void ofApp::update(){
  
    }


//--------------------------------------------------------------
void ofApp::draw(){
    x = ofGetFrameNum();
    int objNum = (x/120)%4;
    if (objNum == 0){
        ofSetColor(124, 205, 252);
        ofDrawEllipse(200, 200, 200, 200);
        ofSetColor(255,255,255);
        ofDrawEllipse(150, 150, 40, 40);
    }
    if (objNum == 1){
        ofSetColor(149, 156, 151);
        ofNoFill();
        ofSetLineWidth(10);
        ofDrawRectangle(100, 100, 100, 300);
        ofDrawRectangle(200, 100, 100, 200);
        ofDrawRectangle(300, 100, 100, 400);
        ofDrawRectangle(400, 100, 100, 100);
        
    }
    if (objNum == 2){
        ofSetColor(124, 205, 252);
        ofDrawTriangle(500,100,100,400,900,400);
    }
    if (objNum == 3) {
        ofSetColor(237, 126, 57);
        ofSetLineWidth(5);
        ofNoFill();
        ofDrawEllipse(300, 300, 250, 300);
        ofDrawBezier(205, 280, 225, 250, 245, 250, 265, 280);
        ofDrawBezier(335, 280, 355, 250, 375, 250, 395, 280);
        ofDrawBezier(235, 340, 278, 420, 322, 420, 365, 340);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
