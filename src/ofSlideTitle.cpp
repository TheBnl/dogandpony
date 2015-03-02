#include "ofSlideTitle.h"

ofSlideTitle::ofSlideTitle(std::vector<string> _titles)
{
    titles = _titles;
    
    /*
    #ifdef TARGET_OPENGLES
        shaderBlurX.load("shadersES2/shaderBlurX");
        shaderBlurY.load("shadersES2/shaderBlurY");
    #else
        if(ofIsGLProgrammableRenderer()){
            shaderBlurX.load("shadersGL3/shaderBlurX");
            shaderBlurY.load("shadersGL3/shaderBlurY");
        }else{
            shaderBlurX.load("shadersGL2/shaderBlurX");
            shaderBlurY.load("shadersGL2/shaderBlurY");
        }
    #endif
    */
    
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
        
        /*
        float blur = 60;//ofMap(20, 0, ofGetWidth(), 0, 10, true);
        
        //----------------------------------------------------------
        fboBlurOnePass.begin();
        
        shaderBlurX.begin();
        shaderBlurX.setUniform1f("blurAmnt", blur);
        
        thisTitleShadowPlane.draw();
        
        shaderBlurX.end();
        
        fboBlurOnePass.end();
        
        //----------------------------------------------------------
        fboBlurTwoPass.begin();
        
        shaderBlurY.begin();
        shaderBlurY.setUniform1f("blurAmnt", blur);
        
        fboBlurOnePass.draw(0, 0);
        
        shaderBlurY.end();
        
        fboBlurTwoPass.end();
        
        //----------------------------------------------------------
        ofSetColor(ofColor::white);
        fboBlurTwoPass.draw(0, 0);
        */
        
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
