//
//  ball.cpp
//  01_simpleClass
//
//  Created by Bernardo Santos Schorr on 1/31/15.
//
//

#include "ball.h"

void ball::setup(float _radius) {
    
    radius = _radius;
    angularVel = _radius / 100;
    
    angle = 0;
    
    pos.set(0);
    
    color = ofColor(255, 0, 0);
    ofColor target = ofColor(0, 0, 255);
    
    color.lerp(target, radius/300);
    
}

void ball::update() {
    
    pos.x = cos(ofDegToRad(angle)) * radius;
    pos.y = sin(ofDegToRad(angle)) * radius;
    
    angle += angularVel;

}

void ball::draw() {
    
    ofSetColor(color);
    ofCircle(pos, 5);
    
}