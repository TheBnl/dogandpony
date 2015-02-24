#include "ofSniffer.h"

ofSniffer::ofSniffer()
{
    inputFont.loadFont("input-regular.ttf", 9);
}


void ofSniffer::update()
{
    text = "";
    
    inputLines = cropArray(inputLines, 1000);
    
    for (int i = 0; i < inputLines.size(); i++)
    {
        if (!inputLines.at(i).empty()) {
            text += inputLines.at(i)+" \n";
        }
    }

}


void ofSniffer::draw(int x, int y)
{

    ofSetColor( 255, 255, 255, 255 );
    inputFont.drawString(text, x, y - inputFont.stringHeight(text));
    //ofDrawBitmapString("lines: " + ofToString(inputLines.size()), 10, 50);
    
}


std::vector<string> ofSniffer::cropArray(vector<string> array, int cropAt)
{
    if (array.size() > cropAt) {
        array.erase(array.begin(), array.end() - cropAt);
    }
    
    return array;
}
