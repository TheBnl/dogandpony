#pragma once

#include "ofMain.h"
#include "ofxTimer.h"
#include "ofSpinner.h"
#include "ofProgressBar.h"
#include "ofSlideIndicator.h"
#include "ofSculptureViewer.h"
#include "ofSniffer.h"
#include "ofAnimatedImage.h"

class ofApp : public ofBaseApp {

	public:
    
		void setup();
		void update();
		void draw();
        void exit();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    private:

        ofxTimer *twohundredSecondTimer;
        ofxTimer *twentySecondTimer;
        ofxTimer *oneSecondTimer;
        ofxTimer *msTimer;
        ofSpinner *spinner;
        ofProgressBar *progressBar;
        ofSlideIndicator *slideIndicator;
        ofSculptureViewer *sculptureViewer;
        ofSniffer sniffer;
};
