#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //initialize

    numOfXTiles = 20;
    numOfYTiles = 20;
    objSizeH = 5;
    spacingY = ofGetHeight()/numOfYTiles;
    objSizeW = 30;
    spacingX = ofGetWidth()/numOfXTiles;

    ofSetBackgroundAuto(false);
    ofSetBackgroundColor(0);
    ofSetColor(255);
    ofSetCircleResolution(50);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // ghosting
    ofPushStyle();
    ofSetColor(0,10);
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    ofPopStyle();

    // center the shapes
    ofTranslate(spacingX/2,spacingY/2);
    for(int x = 0; x < numOfXTiles; x++)
    {
        for(int y = 0; y < numOfYTiles; y++)
        {
            float locX = x*spacingX + spacingX/2;
            float locY = y*spacingY;

            float angle = atan2(ofGetHeight()/2 - locY,ofGetWidth()/2 - locX);
            float shapeDist = ofDist(ofGetWidth()/2,ofGetHeight()/2,locX,locY);

            ofPushMatrix();
            ofTranslate(locX,locY);
            // rotate in the (opposite + 180) direction from the window center
            ofRotate(ofRadToDeg(angle) + 180);
            // translate sinusoidally from the direction of the window's center
            ofTranslate(ofMap(sin(ofGetElapsedTimef() + ofMap(shapeDist,0,ofGetWidth(),TWO_PI,0)), -1, 1, 0, 75),0);

            ofDrawCircle(0,0,4);
            ofPopMatrix();
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    // save screenshot as png
    if(key == 's'){
        ofSaveScreen(ofToString(ofGetFrameNum())+".png");
    }
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
