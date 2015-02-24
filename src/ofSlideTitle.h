#ifndef _OF_SLIDE_TITLE
#define _OF_SLIDE_TITLE

#include "ofMain.h"
//#include "ofxBlurShader.h"

class ofSlideTitle {
  
public:
    
    ofSlideTitle(std::vector<string> titles, int iterations, float maxRange);
    
    void update();
    void draw();
    
private:
    
    std::vector<string> titles;
    std::vector<float> zIndexes;
    std::vector<float> increments;
    std::vector<float> randomIterations;
    std::vector<float> randomRanges;
    
    ofTrueTypeFont titleFont;
    ofPlanePrimitive titlePlane;
    ofPlanePrimitive titleShadow;
    float increment;
    float maxRange;
    int iterations;

};

#endif