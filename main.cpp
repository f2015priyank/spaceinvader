#include <iostream>
#include "Round.h"
#include "UIKit.h"
#include "BulletManager.h"
using namespace std;

//static BulletManager bulletManager;

int main() {
	Round round(1);
	round.startRound();
	//UIKit::frame(0, 10, 20, 30, 5);
	cout << "#";
	system("pause");
	return 0;
}

