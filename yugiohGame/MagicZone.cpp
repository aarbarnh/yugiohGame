#include "MagicZone.h"
#include <iostream>


MagicZone::MagicZone()
{
}

MagicZone::MagicZone(int size, string type)
{
	fieldSize = size;
	fieldType = type;
}

void MagicZone::PlayMagicCard(Hand hand, string card, string mode)
{
	vector<Cards> tempHand = hand.GetHand();
	for (int i = 0; i < tempHand.size(); i++)
	{
		if (tempHand[i].GetName() == card)
		{
			tempHand[i].SetAttackDefense(mode);
			if (mode == "Set")
			{
				tempHand[i].SetIsSet(true);
			}
			else
			{
				tempHand[i].SetIsSet(false);
			}
			cout << "You placed " << tempHand[i].GetName() << " in your magic zone.\n\n";
			magicZone.push_back(tempHand[i]);
		}
	}
}

void MagicZone::ShowMagicZone()
{
	cout << "Magic/Trap cards in your magic zone:\n\n";
	for (int i = 0; i < magicZone.size(); i++)
	{
		cout << magicZone[i].GetName() << " (" << magicZone[i].GetCardType() << ") ";
		if (magicZone[i].GetIsSet() == true)
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

vector<Cards> MagicZone::GetMagicZone()
{
	return magicZone;
}


MagicZone::~MagicZone()
{
}
