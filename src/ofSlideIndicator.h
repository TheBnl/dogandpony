#ifndef _OF_SLIDE_INDICATOR
#define _OF_SLIDE_INDICATOR

#include "ofMain.h"

class ofSlideIndicator {
  
public:
    
    ofSlideIndicator(int numSlides);
    
    void update(float time);
    void draw(int x, int y);
    
private:
    
    int numSlides;
    int curSlide;
    string slideIndicatorString;

};

#endif