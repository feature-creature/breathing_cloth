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
    // center the shapes
    ofTranslate(spacingX/2,spacingY/2);
    for(int x = 0; x < numOfXTiles; x++)
    {
        for(int y = 0; y < numOfYTiles; y++)
        {
            float locX = x*spacingX;
            float locY = y*spacingY;
            float angle = atan2(ofGetHeight()/2 - locY,ofGetWidth()/2 - locX);
            float shapeDist = ofDist(ofGetWidth()/2,ofGetHeight()/2,locX,locY);

            ofPushMatrix();
            ofTranslate(locX,locY);
            // rotate in the (opposite + 180) direction from the mouse
            ofRotate(ofRadToDeg(angle) + 180);
            // translate 100 from the direction of the window's center
            ofTranslate(100,0);

            ofDrawCircle(0,0,4);
            ofPopMatrix();
        }
    }
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
