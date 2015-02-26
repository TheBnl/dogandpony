#include "ofSlide.h"

ofSlide::ofSlide(std::vector<string> titles, string fileName)
{
    slideTitle = new ofSlideTitle(titles);
    slideImage = new ofSlideImage(fileName);
}

void ofSlide::update()
{
    slideTitle->update();
    slideImage->update();
}

void ofSlide::draw()
{
    slideTitle->draw();
    slideImage->draw();
}
