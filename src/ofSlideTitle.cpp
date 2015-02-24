#include "ofSlideTitle.h"

ofSlideTitle::ofSlideTitle(std::vector<string> _titles)
{
    titles = _titles;
    
    for (int i = 0; i < titles.size(); i++) {
        
        float randomRange = ofRandom(20, 50);//rand() % (50 - 20) + 20;
        float randomIteration = ofRandom(400, 750);//rand() % (750 - 400) + 400;
        
        increments.push_back(0);
        zIndexes.push_back(0);
        randomIterations.push_back(randomIteration);
        randomRanges.push_back(randomRange);
    }
}


void ofSlideTitle::update()
{
    for (int i = 0; i < zIndexes.size(); i++) {
        increments[i] = increments[i] + (M_PI * 2 / randomIterations[i]);
        zIndexes[i] = (sin( increments[i] ) / 2 + 0.5) * randomRanges[i];
    }
}

void ofSlideTitle::draw()
{

    for (int i = 0; i < titles.size(); i++) {
        
        string title = titles.at(i);
        
        ofTrueTypeFont thisTitleFont;
        ofPlanePrimitive thisTitlePlane;
        ofPlanePrimitive thisTitleShadowPlane;
        
        thisTitleFont.loadFont("input-bold.ttf", 45);
        float height = thisTitleFont.stringHeight( title );
        float width = thisTitleFont.stringWidth( title );
        float extraSpace = (height * 2) * i;
        
        float x = (ofGetWidth() / 2) - (width / 2);
        float y = (ofGetHeight() / 2) - (height * titles.size()) / 2 + extraSpace;
        
        thisTitlePlane.set( width + 50, height * 2 );
        thisTitlePlane.setPosition( ofGetWidth() / 2 + 5,  y, zIndexes[i] - 0.1 );
        thisTitleShadowPlane.set( width + 60, height * 2 + 5 );
        thisTitleShadowPlane.setPosition( ofGetWidth() / 2 + 5, y, zIndexes[i] - 0.2 );
        
        ofSetColor( 0, 0, 0, 200 );
        thisTitleShadowPlane.draw();
        
        ofSetColor( 245, 245, 245, 255 );
        thisTitlePlane.draw();
        
        ofSetColor( 0, 0, 0, 255 );
        ofPushMatrix();
        ofTranslate( 0, 0, zIndexes[i] );
        thisTitleFont.drawString( title, x, y + ((height * 2) - height)/2 );
        ofPopMatrix();
    }

}
