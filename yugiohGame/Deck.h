#ifndef DECK_H
#define DECK_H
#include <vector>
#include "Cards.h"

using namespace std;

class Deck
{
public:
	Deck();
	Deck(int cards);
	void AddCards(Cards card);
	void ShuffleDeck();
	void SubtractFromDeck();
	vector<Cards> GetDeck();
	~Deck();
private:
	vector<Cards> deck;
};

#endif
