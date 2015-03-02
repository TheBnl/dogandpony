#include "ofMain.h"
#include "ofApp.h"

#define USE_PROGRAMMABLE_RENDERER

#ifdef USE_PROGRAMMABLE_RENDERER
#include "ofGLProgrammableRenderer.h"
#endif

//========================================================================
int main( ){
    
    #ifdef USE_PROGRAMMABLE_RENDERER
    ofSetCurrentRenderer(ofGLProgrammableRenderer::TYPE);
    cout << "USE_PROGRAMMABLE_RENDERER" << endl;
    #endif
    
    ofSetDataPathRoot("../Resources/data/");
	ofSetupOpenGL(1024,768,OF_WINDOW);
	ofRunApp(new ofApp());

}
