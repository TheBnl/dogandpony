#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    msTimer = new ofxTimer();
    oneSecondTimer = new ofxTimer();
    twentySecondTimer = new ofxTimer();
    twohundredSecondTimer = new ofxTimer();
    
    msTimer->setup( 300, true );
    oneSecondTimer->setup( 1000, true );
    twentySecondTimer->setup( 20000, true );
    twohundredSecondTimer->setup( 200000, false ); // destroy app after 200 seconds
    
    msTimer->startTimer();
    oneSecondTimer->startTimer();
    twentySecondTimer->startTimer();
    twohundredSecondTimer->startTimer();
    
    spinner = new ofSpinner();
    progressBar = new ofProgressBar( twentySecondTimer->getTimeLeftInMillis() );
    slideIndicator = new ofSlideIndicator( 10 );
    sculptureViewer = new ofSculptureViewer("dc_lvl-1.obj");
    
    sniffer.startThread();
}

//--------------------------------------------------------------
void ofApp::update(){
    
    spinner->update( oneSecondTimer->getTimeLeftInMillis() );
    progressBar->update( twentySecondTimer->getTimeLeftInMillis() );
    slideIndicator->update( twentySecondTimer->getTimeLeftInMillis() );
    sculptureViewer->update();
    sniffer.update( msTimer->getTimeLeftInMillis() );
    
}

//--------------------------------------------------------------
void ofApp::draw() {
    
    spinner->draw( ofGetWidth() - 10, ofGetHeight() - 5 );
    progressBar->draw( 48, ofGetHeight() - 5 );
    slideIndicator->draw( 0, ofGetHeight() - 5 );
    sculptureViewer->draw( ofGetWidth() - 150, 150 );
    sniffer.draw(10, ofGetHeight() - 15);
    
    ofDrawBitmapString( ofToString( twohundredSecondTimer->getTimeLeftInSeconds() ), 10, 15 );
    ofDrawBitmapString( ofToString( twentySecondTimer->getTimeLeftInSeconds() ), 10, 30 );
    
}

//--------------------------------------------------------------
void ofApp::exit() {
    cout << "quiting app";
    sniffer.stopThread();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
