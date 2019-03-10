#include "Cards.h"
#include "Deck.h"
#include "Field.h"
#include "Hand.h"
#include "MagicZone.h"
#include "MonsterZone.h"

#include <boost/range/algorithm_ext.hpp>
#include <iostream>

using namespace std;

int main()
{
	Deck yugiDeck(40);
	Deck kaibaDeck(40);

	Hand yugiHand(6, "Hand");
	Hand kaibaHand(6, "Hand");

	MonsterZone yugiMonster(5, "Monster Zone");
	MonsterZone kaibaMonster(5, "Monster Zone");

	MagicZone yugiMagic(5, "Magic Zone");
	MagicZone kaibaMagic(5, "Magic Zone");

	Cards darkMagician("Dark Magician","Monster","Spellcaster","Dark",2500,2100,7);
	//Cards feralImp("Feral Imp","Monster","Fiend","Dark",1300,1400,4);
	Cards darkHole("Dark Hole","Magic","Destroy all monsters.");

	Cards blueEyes("Blue Eyes White Dragon", "Monster", "Dragon", "Light", 3000, 2500, 8);
	//Cards mysticHorse("Mystic Horseman", "Monster", "Beast", "Earth", 1300, 1550, 4);
	Cards rudeKaiser("Rude Kaiser", "Monster", "Beast-Warrior", "Earth", 1800, 1600, 5);

	yugiDeck.AddCards(darkHole);
	yugiDeck.AddCards(darkMagician);
	//yugiDeck.AddCards(feralImp);
	yugiDeck.ShuffleDeck();

	kaibaDeck.AddCards(blueEyes);
	//kaibaDeck.AddCards(mysticHorse);
	kaibaDeck.AddCards(rudeKaiser);
	kaibaDeck.ShuffleDeck();

	yugiHand.DrawCard(yugiDeck); //yugi draw
	yugiDeck.SubtractFromDeck();
	yugiHand.DrawCard(yugiDeck);
	yugiDeck.SubtractFromDeck();

	kaibaHand.DrawCard(kaibaDeck); //kaiba draw
	kaibaDeck.SubtractFromDeck();
	kaibaHand.DrawCard(kaibaDeck);
	kaibaDeck.SubtractFromDeck();

	//testing
	yugiHand.ShowHand();
	yugiHand.LookAtCard("Dark Magician");
	yugiMonster.SummonMonster(yugiHand, "Dark Magician","Attack");
	kaibaMonster.SummonMonster(kaibaHand, "Rude Kaiser", "Attack");
	yugiHand.DiscardCard("Dark Magician");
	yugiHand.ShowHand();
	yugiMonster.ShowMonsterZone();
	kaibaHand.DiscardCard("Rude Kaiser");
	yugiMagic.PlayMagicCard(yugiHand, "Dark Hole", "Set");
	yugiHand.DiscardCard("Dark Hole");
	yugiHand.ShowHand();
	yugiMagic.ShowMagicZone();
	kaibaHand.ShowHand();

	string attackChoice;
	string attackerChoice;
	cout << "Which monster would you like to attack?\n";
	getline(cin, attackChoice);
	cout << "\nWho would you like to use to attack?\n";
	getline(cin, attackerChoice);

	yugiMonster.AttackMonster(kaibaMonster.GetMonsterZone(),attackerChoice,attackChoice);


	system("pause");
	return 0;
}