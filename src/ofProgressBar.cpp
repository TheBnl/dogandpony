#include "ofProgressBar.h"

ofProgressBar::ofProgressBar(float _time)
{
    time = _time;
}

void ofProgressBar::update(float curTime)
{
    
    int width = ofGetWidth() - 58;
    int characterWidth = 8;
    int numCharacters = ceil(((time - curTime) / time) * (width / characterWidth));
    
    characters = "";
    for (int i = 0; i < numCharacters; i++)
    {
        characters += "=";
    }
    
}

void ofProgressBar::draw(int x, int y)
{
    ofDrawBitmapStringHighlight(characters, x, y);
}
