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
    void setup(ofVec2f _pos, float _size);
    void update();
    void draw();
    void reset(ofVec2f _pos);
    
    ofVec2f pos, vel;
    ofColor color;
    float size;
    
};
