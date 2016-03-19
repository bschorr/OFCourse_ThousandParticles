//
//  ball.cpp
//  01_simpleClass
//
//  Created by Bernardo Santos Schorr on 1/31/15.
//
//

#include "ball.h"

void ball::setup() {
    
    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
    
}

void ball::update(ofVec2f dest) {
    
    pos = pos * 0.8 + dest * 0.2;
    
}

void ball::draw() {
    
    ofCircle(pos, 10);
    
}