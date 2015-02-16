#ifndef _OF_SPINNER
#define _OF_SPINNER

#include "ofMain.h"

class ofSpinner {
  
public:
    
    ofSpinner();
    
    void update(float time);
    void draw(int x, int y);
    
private:
    
    string character;

};

#endif