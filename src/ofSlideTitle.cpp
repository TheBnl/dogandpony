#include "ofSlideTitle.h"

ofSlideTitle::ofSlideTitle(std::vector<string> _titles, int _iterations, float _maxRange)
{
    titles = _titles;
    maxRange = _maxRange; //30
    iterations = _iterations; //750
    
    for (int i = 0; i < titles.size(); i++) {
        
        int randomRange = rand() % (50 - 20) + 20;
        int randomIteration = rand() % (750 - 400) + 400;
        
        cout << "range: " << randomRange << endl;
        cout << "iterations: " << randomIteration << endl;
        
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
        float thisTitleHeight = thisTitleFont.stringHeight( title );
        float thisTitleWidth = thisTitleFont.stringWidth( title );
        float thisTitleX = (ofGetWidth() / 2) - (thisTitleWidth / 2);
        float thisTitleY = (ofGetHeight() / 2) + (thisTitleHeight / 2) + ((thisTitleHeight * 2) * i);
        
        thisTitlePlane.set( thisTitleWidth + 50, thisTitleHeight * 2 );
        thisTitlePlane.setPosition( ofGetWidth() / 2 + 5, ofGetHeight() / 2 + ((thisTitleHeight * 2) * i), zIndexes[i] - 1 );
        thisTitleShadowPlane.set( thisTitleWidth + 60, thisTitleHeight * 2 + 5 );
        thisTitleShadowPlane.setPosition( ofGetWidth() / 2 + 5, ofGetHeight() / 2 + ((thisTitleHeight * 2) * i + 1), zIndexes[i] - 2 );
        
        
        ofPushMatrix();
        
        ofSetColor( 0, 0, 0, 200 );
        thisTitleShadowPlane.draw();
        
        ofSetColor( 245, 245, 245, 255 );
        thisTitlePlane.draw();
        
        ofTranslate(0, 0, zIndexes[i]);
        ofSetColor( 0, 0, 0, 255 );
        thisTitleFont.drawString( title, thisTitleX, thisTitleY );
        
        ofPopMatrix();
        
    }

}
