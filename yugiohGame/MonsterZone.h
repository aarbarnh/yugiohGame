#ifndef MONSTERZONE_H
#define MONSTERZONE_H

#include "Field.h"
#include "Hand.h"
#include<vector>

class MonsterZone :
	public Field
{
public:
	MonsterZone();
	MonsterZone(int size, string type);
	void SummonMonster(Hand hand, string monster, string mode);
	void ShowMonsterZone();
	void AttackMonster(vector<Cards> mZone, string attacker, string target);
	vector<Cards> GetMonsterZone();
	~MonsterZone();
private:
	vector<Cards> monsterZone;
};

#endif

