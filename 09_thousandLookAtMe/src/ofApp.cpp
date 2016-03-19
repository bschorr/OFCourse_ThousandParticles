#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    
    for (int x = 0; x < ofGetWidth(); x+=20) {
        for (int y = 0; y < ofGetHeight(); y+=20) {
            
            ofVec2f pos;
            pos.set(x, y);
            square mySquare;
            mySquare.setup(pos);
            squareList.push_back(mySquare);
            
        }
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofVec2f mousePos;
    mousePos.x = ofGetMouseX();
    mousePos.y = ofGetMouseY();
    
    for (int i = 0; i < squareList.size(); i++) {
        squareList[i].update(mousePos);
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < squareList.size(); i++) {
        squareList[i].draw();
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
