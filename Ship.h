#ifndef SHIP_H
#define SHIP_H

#include "Coord.h"

class Ship
{
protected:
	void eraseShip() const;
	void drawShip() const;

public:
	Coord coord;
	Ship();		
	void changePosition(char);
};

#endif