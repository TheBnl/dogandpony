#include "ofSniffer.h"
#include <string>
#include <iterator>

ofSniffer::ofSniffer()
{
    inputFont.loadFont("input-regular.ttf", 9);
}


void ofSniffer::update()
{
    text = "";
    
    if (inputLines.size() > 10) {
        // make sure it is posibble to erase
        inputLines.erase(inputLines.begin(), inputLines.end() - 10);
    }
    
    for (int i = 0; i < inputLines.size(); i++)
    {
        text += inputLines[i]+"\n";
    }

}

void ofSniffer::draw(int x, int y)
{
        
    inputFont.drawString(text, x, y - inputFont.stringHeight(text));
    ofDrawBitmapString("lines: " + ofToString(inputLines.size()), 10, 50);
    
}
