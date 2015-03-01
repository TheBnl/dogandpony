#include "ofSlideImage.h"

ofSlideImage::ofSlideImage(string fileName)
{
    image.loadImage( fileName );
    
    width = image.getWidth();
    height = image.getHeight();
    
    imageTexture = image.getTextureReference();
    imagePlane.set( width, height );
    imagePlane.enableTextures();
    imagePlane.resizeToTexture(imageTexture);
    
    increment = 0;
    randomRange = ofRandom(10, 30);
    randomIteration = ofRandom(400, 750);
}

void ofSlideImage::update()
{
    increment = increment + (M_PI * 2 / randomIteration);
    
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
    z = (sin( increment ) / 2 + 0.5) * randomRange;
    
    imagePlane.setPosition( x, y, z );
}

void ofSlideImage::draw()
{
    imageTexture.bind();
    ofSetColor(255, 255, 255, 255);
    imagePlane.draw();
    imageTexture.unbind();
}
