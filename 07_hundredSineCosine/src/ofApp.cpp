#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    
    for (int i = 0; i < 300; i++) {
        ball trigBall;
        trigBall.setup(i);
        ballList.push_back(trigBall);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < ballList.size(); i++) {
        ballList[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(ofGetWindowSize()/2);

    for (int i = 0; i < ballList.size(); i++) {
        ballList[i].draw();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
