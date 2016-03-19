//
//  square.cpp
//  06_lookAtMe
//
//  Created by Bernardo Schorr on 4/30/15.
//
//

#include "square.h"

void square::setup() {
    
    pos.set(ofGetWindowSize()/2);
    
}

void square::update(ofVec2f lookAt) {
    
    ofVec2f diff;
    diff = lookAt - pos;
    rot = atan2(diff.y, diff.x);
    rot = ofRadToDeg(rot);
    
}

void square::draw() {
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    ofTranslate(pos);
    ofRotate(rot);
    ofRect(0, 0, 50, 50);
    
}