#include "Cards.h"
#include "Deck.h"
#include "Field.h"
#include "Hand.h"
#include "MonsterZone.h"
#include <iostream>

using namespace std;

int main()
{
	Deck yugiDeck(40);
	Hand yugiHand(6, "Hand");
	MonsterZone yugiMonster(5, "Monster Zone");

	Cards darkMagician("Dark Magician","Monster","Spellcaster","Dark",2500,2100,7);
	Cards feralImp("Feral Imp","Monster","Fiend","Dark",1300,1400,4);
	Cards darkHole("Dark Hole","Magic","Destroy all monsters.");

	yugiDeck.AddCards(darkHole);
	yugiDeck.AddCards(darkMagician);
	yugiDeck.AddCards(feralImp);
	yugiDeck.ShuffleDeck();

	yugiHand.DrawCard(yugiDeck);
	yugiDeck.SubtractFromDeck();
	yugiHand.DrawCard(yugiDeck);
	yugiDeck.SubtractFromDeck();

	yugiHand.ShowHand();
	yugiHand.LookAtCard("Dark Magician");
	yugiMonster.SummonMonster(yugiHand, "Dark Magician","Attack");
	yugiHand.DiscardCard("Dark Magician");
	yugiHand.ShowHand();
	yugiMonster.ShowMonsterZone();

	system("pause");
	return 0;
}