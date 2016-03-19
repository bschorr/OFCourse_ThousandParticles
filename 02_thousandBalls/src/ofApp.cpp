#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    //ofSetBackgroundAuto(false);
    
    for (int i = 0; i<1000; i++) {
        
        ball bouncingBall;
        
        float ballSize = ofRandom(2,5);
        
        bouncingBall.setup(ballSize);
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
