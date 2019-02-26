#include "Cards.h"

Cards::Cards()
{
}

Cards::Cards(string name, string type, string mtype, string attri, int attack, int defense, int stars)
{
	cardName = name;
	cardType = type;
	attackPts = attack;
	defensePts = defense;
	cardStars = stars;
	cardAttribute = attri;
	monsterType = mtype;
}

Cards::Cards(string name, string type, string effect)
{
	cardName = name;
	cardType = type;
	cardEffect = effect;
}

void Cards::SetAttackDefense(string mode)
{
	attackDefense = mode;
}

void Cards::SetIsSet(bool answer)
{
	if (answer == true)
	{
		isSet = true;
	}
	else
	{
		isSet = false;
	}
}

string Cards::GetAttackDefense()
{
	return attackDefense;
}

string Cards::GetName()
{
	return cardName;
}

string Cards::GetEffect()
{
	return cardEffect;
}

string Cards::GetCardType()
{
	return cardType;
}

string Cards::GetMType()
{
	return monsterType;
}

string Cards::GetAttri()
{
	return cardAttribute;
}

int Cards::GetAttack()
{
	return attackPts;
}

int Cards::GetDefense()
{
	return defensePts;
}

int Cards::GetStars()
{
	return cardStars;
}

bool Cards::GetIsSet()
{
	return isSet;
}


Cards::~Cards()
{
}
