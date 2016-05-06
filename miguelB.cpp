// Miguel Barrales
// 335
// Prison Escape
// 4/24/16
// Weapon Design : Creates a weapon for the player to shoot enemies
// and movement for the weapon to traverse with the player

// 8 = knife
// 9 = crowbar
// 10 = shield
// 11 = pistol
// 12 = shotgun
// 13 = stun gun

#include <iostream>
#include <cstdlib>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "main.h"
#include "juliaA.h"
using namespace std;


//initilaze weapon on top of player to layer
//in main its set to player to follow the player around
void weapon(Game *game)
{	
	declareobject(game, 8, 10, 10, 465, 205);
	declareobject(game, 9, 10, 10, 465, 205);
	declareobject(game, 10, 10, 10, 465, 205);
	declareobject(game, 11, 10, 10, 465, 205);
	declareobject(game, 12, 10, 10, 465, 205);
	declareobject(game, 13, 10, 10, 465, 205);
	declareobject(game, 14, 10, 10, 465, 205);	

}
//render weapons && in main it layer on top of player
void renderKnife(Game *game)
{
	drawobject(game,8);
	drawobject(game,9);
	drawobject(game,10);
	drawobject(game,11);
	drawobject(game,12);
	drawobject(game,13);
	drawobject(game,14);
	
}

