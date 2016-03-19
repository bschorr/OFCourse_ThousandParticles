//
//  ball.cpp
//  01_simpleClass
//
//  Created by Bernardo Santos Schorr on 1/31/15.
//
//

#include "ball.h"

void ball::setup() {
    
    radius = 300;
    angle = 0;
    
    pos.set(0);
    
}

void ball::update() {
    
    pos.x = cos(ofDegToRad(angle)) * radius;
    pos.y = sin(ofDegToRad(angle)) * radius;
    
    angle++;
    
    
    
}

void ball::draw() {
    
    ofTranslate(ofGetWindowSize()/2);
    ofCircle(pos, 10);
    
}