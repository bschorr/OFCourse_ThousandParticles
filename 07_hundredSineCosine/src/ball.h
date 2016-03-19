//
//  ball.h
//  01_simpleClass
//
//  Created by Bernardo Santos Schorr on 1/31/15.
//
//

#pragma once

#include "ofMain.h"

class ball {
    
public:
    void setup(float _radius);
    void update();
    void draw();
    
    ofVec2f pos;
    float radius, angle, angularVel;
    ofColor color;
    
};
