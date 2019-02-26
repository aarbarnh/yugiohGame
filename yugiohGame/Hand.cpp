#include "Hand.h"
#include <iostream>

Hand::Hand()
{
}

Hand::Hand(int size, string type)
{
	fieldSize = size;
	fieldType = type;
	hand.reserve(fieldSize);
}

void Hand::DrawCard(Deck deck)
{
	vector<Cards> tempDeck = deck.GetDeck();
	cout << "You drew " << tempDeck[0].GetName() << "\n\n";
	hand.push_back(tempDeck[0]);
}

void Hand::ShowHand()
{
	cout << "Your hand:\n\n";
	for (int i = 0; i < hand.size(); i++)
	{
		cout << hand[i].GetName() << "\n";
	}
	cout << "\n";
}

void Hand::LookAtCard(string card)
{
	for (int i = 0; i < hand.size(); i++)
	{
		if (hand[i].GetName() == card)
		{
			if (hand[i].GetCardType() == "Monster")
			{
				cout << hand[i].GetName() << "\nStars: " << hand[i].GetStars() << "\nType: " << hand[i].GetMType() << "\nAttribute: " << hand[i].GetAttri() << "\nAttack: " << hand[i].GetAttack() << "\nDefense: " << hand[i].GetDefense() << "\n\n";
			}
			else
			{
				cout << hand[i].GetName() << "\nEffect: " << hand[i].GetEffect() << "\n\n";
			}
		}

	}
}

void Hand::DiscardCard(string card)
{
	for (int i = 0; i < hand.size(); i++)
	{
		if (hand[i].GetName() == card)
		{
			hand.erase(hand.begin() + i);
		}
	}
}

vector<Cards> Hand::GetHand()
{
	return hand;
}

Hand::~Hand()
{
}
