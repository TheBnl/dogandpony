#ifndef _OF_SLIDE_IMAGE
#define _OF_SLIDE_IMAGE

#include "ofMain.h"

class ofSlideImage {
  
public:
    
    ofSlideImage(string fileName);
    
    void update();
    void draw();
    
private:
    
    ofPlanePrimitive imagePlane;
    ofTexture imageTexture;
    ofImage image;
    
    float width;
    float height;
    float x;
    float y;
    float z;
    
    float increment;
    float randomIteration;
    float randomRange;

};

#endif