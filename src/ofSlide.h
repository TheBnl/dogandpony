#ifndef _OF_SLIDE
#define _OF_SLIDE

#include "ofMain.h"
#include "ofSlideTitle.h"
#include "ofSlideImage.h"

class ofSlide {
  
public:
    
    ofSlide(std::vector<string> titles, string fileName);
    
    void update();
    void draw();
    
private:
    
    ofSlideTitle *slideTitle;
    ofSlideImage *slideImage;

};

#endif