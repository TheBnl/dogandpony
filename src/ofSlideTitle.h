#ifndef _OF_SLIDE_TITLE
#define _OF_SLIDE_TITLE

#include "ofMain.h"
//#include "ofxBlurShader.h"

class ofSlideTitle {
  
public:
    
    ofSlideTitle(string text, int _iterations, float _maxRange);
    
    void update();
    void draw();
    
private:
    
    string text;
    ofTrueTypeFont titleFont;
    ofPlanePrimitive titlePlane;
    ofPlanePrimitive titleShadow;
    float titleWidth;
    float titleHeight;
    float x;
    float y;
    float z;
    float increment;
    float maxRange;
    int iterations;

};

#endif