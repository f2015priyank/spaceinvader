#ifndef ROUND_H
#define ROUND_H

#include <string>

using namespace std;

class Round {
	int score;
	int difficulty;
	//Ship ship;
public:
	Round(int difficulty);
	~Round();
	void startRound();
};
#endif // !1