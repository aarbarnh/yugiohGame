#include "Deck.h"
#include <algorithm>
#include<vector>
#include <ctime>
#include <iostream>

using namespace std; 

Deck::Deck()
{
}

Deck::Deck(int cards)
{
	deck.reserve(cards);
}

void Deck::AddCards(Cards card)
{
	deck.push_back(card);
}

void Deck::ShuffleDeck()
{
	srand(time(0));
	random_shuffle(deck.begin(), deck.end());
}

void Deck::SubtractFromDeck()
{
	deck.erase(deck.begin());
}

vector<Cards> Deck::GetDeck()
{
	return deck;
}

Deck::~Deck()
{
}
