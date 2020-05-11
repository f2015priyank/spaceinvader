#include "Ship.h"

#include <iostream>
using namespace std;

void Ship::eraseShip() const
{	
	coord.gotoXY(coord.getPositionX(),coord.getPositionY());
	cout << " ";
}

void Ship::drawShip() const
{
	coord.gotoXY(coord.getPositionX(),coord.getPositionY());
	cout << char(18);
}

Ship::Ship()
{
	coord.setPositionX(20);
	coord.setPositionY(40);
	drawShip();
}

void Ship::changePosition(char key)
{	
	eraseShip();
	switch(key)
	{
		case 'l' :	coord.setPositionX(coord.getPositionX()-1);	break;
		case 'r' :	coord.setPositionX(coord.getPositionX()+1);
	}
	drawShip();
}









