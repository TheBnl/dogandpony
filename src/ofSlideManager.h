#ifndef _OF_SLIDE_MANAGER
#define _OF_SLIDE_MANAGER

#include "ofMain.h"
#include "ofSlide.h"

class ofSlideManager {
  
public:
    
    ofSlideManager();
    
    void update(float time);
    void draw();
    
private:
    
    ofSlide *slideOne;
    ofSlide *slideTwo;
    ofSlide *slideThree;
    ofSlide *slideFour;
    ofSlide *slideFive;
    ofSlide *slideSix;
    ofSlide *slideSeven;
    ofSlide *slideEight;
    ofSlide *slideNine;
    ofSlide *slideTen;

    int currentSlide;

};

#endif