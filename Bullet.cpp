#include "Bullet.h"



#include <iostream>
using namespace std;

void Bullet::startLaser(int x)
{
	coord.setPositionX(x);
	coord.setPositionY(39);
	drawLaser();
	isAlive = true;
}

void Bullet::eraseLaser() const
{	
	coord.gotoXY(coord.getPositionX(),coord.getPositionY());
	cout << " ";
}

void Bullet::drawLaser() const
{	
	coord.gotoXY(coord.getPositionX(),coord.getPositionY());
	cout << laser; 
}

void Bullet::updateLaser()
{

	//Check if there is an alien
		//use ETManager::etManager->getET(x,y)  and check if its null
		//if it is not null, then we need to tell the ETManager that it has died & pass the reference we got in step above
		//then destroy this laser by calling the BulletManager and pass "this" reference
	//else
		//Move the laser foward
}

void Bullet::moveLaser()
{	
	eraseLaser();
	if (coord.getPositionY()>0)  //If still in bounds
	{
		coord.setPositionY(coord.getPositionY()-1);
		drawLaser();
	}
	else  //outta bounds
	{
		isAlive = false;
		BulletManager::bulletManager->destroyLaser(this);
		
	}
}

void Bullet::killLaser()
{
	eraseLaser();
	isAlive = false;
}
