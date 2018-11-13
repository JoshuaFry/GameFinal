//
//  Item.hpp
//  GameFinal
//
//  Created by Jfry on 11/10/18.
//

#ifndef Item_h
#define Item_h
#include "ofMain.h"
#include "collider.h"
#include <stdio.h>
#include "ofxBox2dCircle.h"
#include "ofxBox2dRect.h"
class Player; //foward declaration
class Item{
    
public:
    
    Item(string shape, int x, int y, int size, int style, ofImage image); 
    void setup();
    void update();
    void draw();
	void recreateCollider();
    
    //Ability
    void use();
    void toss();
    void setParent(Player *parent);
    bool hasParent();
    int getX();
    int getY();
	int style;
	int density;
	
	//used to throw item further
	float multiplier; //increases the force of a throw
	float tossForce; //set to the value of scale as a default but is increased by the multiplier. Get reset after item is thrown
	float maxTossForce; //maximum velocity an item can be thrown
	float scale; //default throwing force
	int count;  //used to track # of times the 'e' key is pressed  
	shared_ptr<ofxBox2dBaseShape> it;

	
    
private:
    ofImage image;
	string shape;
	int x, y, size;
    bool hasPlayer;
    Player *parent;
	collider *collide;
	 
};
#endif /* Item_h */

