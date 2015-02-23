#ifndef _OF_SCULPTURE_VIEWER
#define _OF_SCULPTURE_VIEWER

#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

class ofSculptureViewer {
  
public:
    
    ofSculptureViewer(string objectFileName);
    
    void update();
    void draw(int x, int y);
    
    
private:
    
    ofxAssimpModelLoader model;
    int rotationType;
    float rotationAngle;
    float rotationX;
    float rotationY;
    float rotationZ;
};

#endif