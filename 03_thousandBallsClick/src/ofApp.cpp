#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    for (int i = 0; i<1000; i++) {
        
        ball bouncingBall;
        
        ofVec2f ballPos = ofGetWindowSize()/2;
        float ballSize = ofRandom(2,5);
        
        bouncingBall.setup(ballPos, ballSize);
        ballList.push_back(bouncingBall);
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
    
    ofSetColor(0, 10);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());

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
    
    ofBackground(0);
    
    ofVec2f mousePos;
    mousePos.set(x, y);
    
    for (int i = 0; i < ballList.size(); i++) {
        ballList[i].reset(mousePos);
    }

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
