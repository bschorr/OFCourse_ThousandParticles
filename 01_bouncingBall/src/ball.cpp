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
    
    //pos = ofGetWindowSize()/2;
    
    vel.x = ofRandom(-3, 3);
    vel.y = ofRandom(-3, 3);
    
}

void ball::update() {
    
    pos += vel;
    
    if (pos.x >= ofGetWidth()) {
        pos.x = ofGetWidth();
        vel.x *= -1;
    }
    
    if (pos.x <= 0) {
        pos.x = 0;
        vel.x *= -1;
    }
    
    if (pos.y >= ofGetHeight()) {
        pos.y = ofGetHeight();
        vel.y *= -1;
    }
    
    if (pos.y <= 0) {
        pos.y = 0;
        vel.y *= -1;
    }
    
}

void ball::draw() {
    
    ofCircle(pos, 10);
    
}