#include "Round.h"
#include "BulletManager.h"
#include "ETManager.h"

Round::Round(int difficulty) {
	Round::difficulty = difficulty >= 1 && difficulty <= 3 ? difficulty : 1;
	BulletManager::CreateBulletManager();
	ETManager::CreateEtManager();
}

Round::~Round()
{
	BulletManager::DestroyBulletManager();
	ETManager::DestroyEtManager();
}

void Round::startRound() {
	

	//THIS REPLACES THE MAIN FUNCTION
	//Should loop
	//Should call bulletManager and ETManager::CreateManager
	//should update them
	//should update player
	//Should have a pause	
}

//Notes _getch() can let you read input