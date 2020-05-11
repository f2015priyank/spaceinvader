#ifndef BULLETMANAGER_H
#define BULLETMANAGER_H
#include <iostream>
using namespace std;

class Bullet; //foward declaration


class BulletManager
{
public:
	static BulletManager* bulletManager;
	static void CreateBulletManager();
	static void DestroyBulletManager();

	BulletManager();
	const int maxBullets = 50;
	int test = 0;

	Bullet *bulletArr[50];
	void updateBullets();
	void destroyLaser(Bullet*);
private:
};
#endif