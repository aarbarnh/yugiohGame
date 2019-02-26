#include "MonsterZone.h"
#include <iostream>


MonsterZone::MonsterZone()
{
}

MonsterZone::MonsterZone(int size, string type)
{
	fieldSize = size;
	fieldType = type;
	monsterZone.reserve(fieldSize);
}

void MonsterZone::SummonMonster(Hand hand, string monster, string mode)
{
	vector<Cards> tempHand = hand.GetHand();
	for (int i = 0; i < tempHand.size(); i++)
	{
		if (tempHand[i].GetName() == monster)
		{
			tempHand[i].SetAttackDefense(mode);
			if (mode == "Defense")
			{
				tempHand[i].SetIsSet(true);
			}
			else
			{
				tempHand[i].SetIsSet(false);
			}
			cout << "You summoned " << tempHand[i].GetName() << "\n\n";
			monsterZone.push_back(tempHand[i]);
		}
	}
}

void MonsterZone::ShowMonsterZone()
{
	cout << "Monsters in your monster zone:\n\n";
	for (int i = 0; i < monsterZone.size(); i++)
	{
		cout << monsterZone[i].GetName() << " (" << monsterZone[i].GetAttackDefense() << ") ";
		if (monsterZone[i].GetIsSet() == true)
		{
			cout << "is set\n";
		}
		else
		{
			cout << "is face up\n";
		}
	}
	cout << "\n";
}

vector<Cards> MonsterZone::GetMonsterZone()
{
	return monsterZone;
}

MonsterZone::~MonsterZone()
{
}
