#include "ofSlideTitle.h"

ofSlideTitle::ofSlideTitle(string _text)
{
    text = _text;
    titleFont.loadFont( "input-bold.ttf", 45 );
    titleHeight = titleFont.stringHeight( _text );
    titleWidth = titleFont.stringWidth( _text );
    
    titlePlane.set( titleWidth + 50, titleHeight * 2 );
    titleShadow.set( titleWidth + 60, titleHeight * 2 + 5 );
}


void ofSlideTitle::update()
{
    x =  (ofGetWidth() / 2) - (titleWidth / 2);
    y =  (ofGetHeight() / 2) + (titleHeight / 2);
    titlePlane.setPosition( ofGetWidth() / 2, ofGetHeight() / 2, 0 );
    titleShadow.setPosition( ofGetWidth() / 2, ofGetHeight() / 2 + 5, 0 );
}

void ofSlideTitle::draw()
{
    //ofSetColor(255, 255, 255, 255);
    //cout << "drawing title with text: " << text << endl;
    
    ofSetColor( 0, 0, 0, 125 );
    titleShadow.draw();
    
    ofSetColor( 245, 245, 245, 255 );
    titlePlane.draw();
    
    ofSetColor( 0, 0, 0, 255 );
    titleFont.drawString( text, x, y );
    
}
