#ifndef HAND_H
#define HAND_H

#include "Field.h"
#include "Deck.h"
#include <vector>
#include <string>
#include <algorithm>

class Hand :
	public Field
{
public:
	Hand();
	Hand(int size, string type);
	void DrawCard(Deck deck);
	void ShowHand();
	void LookAtCard(string card);
	void DiscardCard(string card);
	vector<Cards> GetHand();
	~Hand();
private:
	vector<Cards> hand;
};

#endif

