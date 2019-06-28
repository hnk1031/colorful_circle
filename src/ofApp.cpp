#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //背景を白にする
    ofBackground(255, 255, 255);
    
    //円の色を黒に設定
    ofSetColor(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 円を描く
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, size_circle);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a') { //キーボードの'a'が押されているあいだ
        //円の色をランダムにする
        ofSetColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'q') { //キーボードの'q'を押した瞬間
        //円の大きさを30から300の間で変化させる
        size_circle = ofRandom(30, 300);
    }
    
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
