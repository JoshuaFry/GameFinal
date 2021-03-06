//
//  MultiPlayerManager.h
//  GameFinal
//
//  Created by Jfry on 11/29/18.
//

#ifndef MultiPlayerManager_h
#define MultiPlayerManager_h

#include <stdio.h>
#include "ofMain.h"
#include "Player.h"
using namespace std;
class MultiPlayerManager{
public:
    MultiPlayerManager(bool keyboard);
    void assignPorts();
    void setup();
    void update();
    void draw();
	static vector<Player*> players;
	static bool keyboard;
private:
    ofSerial ports;
	bool initialize, isPlayerOne;
    vector<string> availblePorts;
};
#endif /* MultiPlayerManager_h */
