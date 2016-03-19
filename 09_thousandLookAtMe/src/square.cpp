//
//  square.cpp
//  06_lookAtMe
//
//  Created by Bernardo Schorr on 4/30/15.
//
//

#include "square.h"

void square::setup(ofVec2f _pos) {
    
    pos = _pos;
    
}

void square::update(ofVec2f lookAt) {
    
    ofVec2f diff;
    diff = lookAt - pos;
    rot = atan2(diff.y, diff.x);
    rot = ofRadToDeg(rot);
    
    gray = diff.length();
    
}

void square::draw() {
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(0, gray);
    
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(rot);
    ofRect(0, 0, 20, 20);
    ofPopMatrix();
    
}