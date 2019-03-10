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

void MonsterZone::AttackMonster(vector<Cards> mZone, string attacker, string target)
{ //keep working on, very bare bones. Need to test if set for total damage/card destruction
	//work on pointer too, want to be able to use pointer with object 
	vector<Cards> tempZone = mZone;
	int yourAttack = 0;
	int theirAttack = 0;

	int yourIndex = 0;
	int theirIndex = 0;

	for (int i = 0; i < tempZone.size(); i++)
	{
		if (tempZone[i].GetName() == target)
		{
			if (tempZone[i].GetIsSet())
			{
				theirAttack = tempZone[i].GetDefense();
				theirIndex = i;
			}
			else
			{
				theirAttack = tempZone[i].GetAttack();
				theirIndex = i;
			}
		}
	}

	for (int i = 0; i < monsterZone.size(); i++)
	{
		if (monsterZone[i].GetName() == attacker)
		{
			yourAttack = monsterZone[i].GetAttack();
			yourIndex = i;
		}
	}

	//just for testing to see if function works, WILL NOT KEEP
	if (yourAttack > theirAttack)
	{
		cout << "Your " << monsterZone[yourIndex].GetName() << " has destroyed their " << tempZone[theirIndex].GetName() << ".\n\n";
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
