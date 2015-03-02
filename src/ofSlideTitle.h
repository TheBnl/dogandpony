#ifndef _OF_SLIDE_TITLE
#define _OF_SLIDE_TITLE

#include "ofMain.h"
#include "ofxFboBlur.h"
#include "ofxBlurShader.h"

class ofSlideTitle {
  
public:
    
    ofSlideTitle(std::vector<string> titles);
    
    void update();
    void draw();
    
private:
    
    std::vector<string> titles;
    std::vector<float> zIndexes;
    std::vector<float> increments;
    std::vector<float> randomIterations;
    std::vector<float> randomRanges;
    
    //std::vector<string> titlesTest;
    //ofShader shaderBlurX;
    //ofShader shaderBlurY;

};

#endif