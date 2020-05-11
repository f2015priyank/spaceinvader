#include "BulletManager.h"
#include "Bullet.h"

BulletManager* BulletManager::bulletManager = nullptr;


void BulletManager::CreateBulletManager()
{
	bulletManager = new BulletManager();
}

void BulletManager::DestroyBulletManager()
{
	delete bulletManager;
}

BulletManager::BulletManager()
{
	for (int i = 0; i < maxBullets; i++)
		bulletArr[i] = nullptr;
}

void BulletManager::updateBullets()
{
	for (int i = 0; i < maxBullets; i++)
	{
		if (bulletArr[i] != nullptr)
			bulletArr[i]->updateLaser();
	}
}

void BulletManager::destroyLaser(Bullet * toDestroy)
{
	//Do the excat same thing that ETManager does, go there and do the same here
	//The goal is to delete the memory from the array and free it from memory
	//and set the array index back to nullptr
	//should call the laser "KillLaser()"

}
