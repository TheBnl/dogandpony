#include "ofSlideTitle.h"

ofSlideTitle::ofSlideTitle(string _text, int _iterations, float _maxRange)
{
    text = _text;
    maxRange = _maxRange;
    iterations = _iterations;
    
    titleFont.loadFont( "input-bold.ttf", 45, true, false, true );
    titleHeight = titleFont.stringHeight( _text );
    titleWidth = titleFont.stringWidth( _text );
    
    titlePlane.set( titleWidth + 50, titleHeight * 2 );
    //titleShadow.set( titleWidth + 60, titleHeight * 2 + 5 );
    
    x =  (ofGetWidth() / 2) - (titleWidth / 2);
    y =  (ofGetHeight() / 2) + (titleHeight / 2);
    z = 0;
}


void ofSlideTitle::update()
{
    increment = increment + (M_PI * 2 / iterations);
    
    x =  (ofGetWidth() / 2) - (titleWidth / 2);
    y =  (ofGetHeight() / 2) + (titleHeight / 2);
    z = (sin( increment ) / 2 + 0.5) * maxRange;
    
    titlePlane.setPosition( ofGetWidth() / 2 + 5, ofGetHeight() / 2, z );
    //titleShadow.setPosition( ofGetWidth() / 2 + 5, ofGetHeight() / 2 + 5, z );
}

void ofSlideTitle::draw()
{
    ofPushMatrix();
        ofSetColor( 245, 245, 245, 255 );
        titlePlane.draw();
    
        ofTranslate(0, 0, z);
        ofSetColor( 0, 0, 0, 255 );
        titleFont.drawString( text, x, y );
    ofPopMatrix();
}
