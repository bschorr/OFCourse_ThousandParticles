//
//  square.h
//  06_lookAtMe
//
//  Created by Bernardo Schorr on 4/30/15.
//
//

#include "ofMain.h"

#pragma once

class square {
public:
    
    void setup(ofVec2f _pos);
    void update(ofVec2f lookAt);
    void draw();
    
    ofVec2f pos;
    float size, rot;
    float gray;

    
};
