#include "ofSpinner.h"

ofSpinner::ofSpinner()
{
}


void ofSpinner::update(float time)
{
    
    int currentIndex = ceil((time * 7) / 1000);
    
    switch (currentIndex) {
        case 0:
            character = "|";
            break;
        case 1:
            character = "\\";
            break;
        case 2:
            character = "-";
            break;
        case 3:
            character = "/";
            break;
        case 4:
            character = "|";
            break;
        case 5:
            character = "\\";
            break;
        case 6:
            character = "-";
            break;
        case 7:
            character = "/";
            break;
            
        default:
            character = character;
            break;
    }
    
}

void ofSpinner::draw(int x, int y)
{
    ofDrawBitmapStringHighlight(character, x, y);
}
