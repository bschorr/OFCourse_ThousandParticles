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
    void setup();
    void update();
    void draw();
    
    ofVec2f pos, vel;
    
};
