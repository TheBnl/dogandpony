#ifndef _OF_PROGRESS_BAR
#define _OF_PROGRESS_BAR

#include "ofMain.h"

class ofProgressBar {
  
public:
    
    ofProgressBar(float time);
    
    void update(float time);
    void draw(int x, int y);
    
private:
    
    float time;
    string characters;

};

#endif