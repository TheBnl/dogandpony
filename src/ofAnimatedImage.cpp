#include "ofAnimatedImage.h"

ofAnimatedImage::ofAnimatedImage(string fileName, int _x, int _y)
{
    image.loadImage(fileName);
    imageWidth = image.getWidth();
    imageHeight = image.getHeight();
    //x = _x;
    //y = _y;
    
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    
    z = 0;
    alpha = 255;
    
    imageTexture = image.getTextureReference();
    
    imagePlane.set(imageWidth, imageHeight);
    imagePlane.setPosition(x, y, 0);
    imagePlane.enableTextures();
    imagePlane.resizeToTexture(imageTexture);
    
}

void ofAnimatedImage::update()
{
    alpha = alpha - .2;
    z = z - 3;
    imagePlane.setPosition(x, y, z);
    
    if (alpha < 0) {
        ofAnimatedImage::remove();
    }
}

void ofAnimatedImage::draw()
{
    imageTexture.bind();
    ofSetColor(255, 255, 255, alpha);
    imagePlane.draw();
    imageTexture.unbind();
    ofSetColor(255, 255, 255, 255);
}

void ofAnimatedImage::remove() {
    image.clear();
    //imagePlane.clear();
    imageTexture.clear();
}