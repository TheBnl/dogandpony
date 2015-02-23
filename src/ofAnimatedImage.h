#ifndef _OF_ANIMATED_IMAGE
#define _OF_ANIMATED_IMAGE

#include "ofMain.h"

class ofAnimatedImage {
  
public:
    
    ofAnimatedImage(string fileName, int x, int y);
    
    void update();
    void draw();
    void remove();
    
private:
    
    ofPlanePrimitive imagePlane;
    ofTexture imageTexture;
    ofImage image;
    
    float imageWidth;
    float imageHeight;
    int x;
    int y;
    int z;
    float alpha;

};

#endif