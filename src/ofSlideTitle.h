#ifndef _OF_SLIDE_TITLE
#define _OF_SLIDE_TITLE

#include "ofMain.h"

class ofSlideTitle {
  
public:
    
    ofSlideTitle(string text);
    
    void update();
    void draw();
    
private:
    
    string text;
    ofTrueTypeFont titleFont;
    ofPlanePrimitive titlePlane;
    ofPlanePrimitive titleShadow;
    float titleWidth;
    float titleHeight;
    int x;
    int y;
    int z;

};

#endif