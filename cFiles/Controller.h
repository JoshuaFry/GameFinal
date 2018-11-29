//
//  Controller.h
//  GameFinal
//
//  Created by Jfry on 11/13/18.
//

#ifndef Controller_h
#define Controller_h
#include "ofMain.h"
#include <stdio.h>
#include <string>
class Controller{
public:
    Controller(string port, int baud);
    void update();
    void setup();
    char getInput();
private:
    ofSerial input;
    char i;
};
#endif /* Controller_h */

