#include "ofSlide.h"

ofSlide::ofSlide(std::vector<string> titles, string _fileName)
{
    fileName = _fileName;
    slideTitle = new ofSlideTitle(titles);
    if (!fileName.empty()) {
        slideImage = new ofSlideImage(fileName);
    }
}

void ofSlide::update()
{
    slideTitle->update();
    if (!fileName.empty()) {
        slideImage->update();
    }
}

void ofSlide::draw()
{
    slideTitle->draw();
    if (!fileName.empty()) {
        slideImage->draw();
    }
}
