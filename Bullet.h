#ifndef BULLET_H
#define BULLET_H

#include "Coord.h"
#include "BulletManager.h"

class Bullet
{
public:
	//constants
	const char laser = '|';

	bool isAlive;
	Coord coord;

	void startLaser(int);
	void eraseLaser() const;
	void drawLaser() const;
	void updateLaser();
	virtual void moveLaser();
	virtual void killLaser();
};

#endif