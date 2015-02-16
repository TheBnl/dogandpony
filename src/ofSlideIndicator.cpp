#include "ofSlideIndicator.h"

ofSlideIndicator::ofSlideIndicator(int _numSlides)
{
    numSlides = _numSlides;
    curSlide = 1;
}

void ofSlideIndicator::update(float time)
{
    if (time <= 0)
    {
        curSlide++;
    }
    
    if (curSlide < 10)
    {
        slideIndicatorString = "0" + ofToString(curSlide) + "/" + ofToString(numSlides);
    } else {
        slideIndicatorString = ofToString(curSlide) + "/" + ofToString(numSlides);
    }
}

void ofSlideIndicator::draw(int x, int y)
{
    ofDrawBitmapStringHighlight(slideIndicatorString, x, y);
}
