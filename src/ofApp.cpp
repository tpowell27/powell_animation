#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    backdrop.loadImage("backdrop.jpg");
    
    fishing.loadImage("goldfish.png");
    
    whale.setAnchorPercent(.5,.5);
    whale.loadImage("whale.png");
    
    pos.x = ofRandom(0,ofGetWidth()-100);
    pos.y = ofRandom(0,ofGetHeight()/4);
    
    pos2.x = -50;
    pos2.y = ofRandom((ofGetHeight()-ofGetHeight()/4),ofGetHeight());
    
    move.x = 1;
    move.y = 1;
    
    move2.x = 1;
    move2.y = 1;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    pos2.x+=move2.x;
    pos2.y+=move2.y;
    rotate+=abs(move.x*8);

    if((pos2.x>=ofGetWidth()+50)||(pos2.x<=-50)){
        move2.x*=-1;
    }
    if((pos2.y>=ofGetHeight())||(pos2.y<=ofGetHeight()-ofGetHeight()/4)) {
        move2.y*=-1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    backdrop.draw(0,0);
    
    fishing.draw(pos2, 50, 50);
    
    ofTranslate(pos.x,pos.y) ;
    ofRotate(rotate);
    whale.draw(0,10,10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key==OF_KEY_LEFT) {
        pos.x-=10;
    }
    if(key==OF_KEY_RIGHT) {
        pos.x+=10;
    }
    if(key==OF_KEY_UP) {
        pos.y-=10;
    }
    if(key==OF_KEY_DOWN) {
        pos.y+=10;
    }
    if(key==OF_KEY_HOME) {
        rotate-=abs(move.x*8);
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
