#ifndef CARDS_H
#define CARDS_H
#include <string>

using namespace std;

class Cards
{
public:
	Cards();
	Cards(string name, string type, string mtype, string attri, int attack, int defense, int stars);
	Cards(string name, string type, string effect);
	string GetName();
	string GetEffect();
	string GetCardType();
	string GetAttackDefense();
	string GetMType();
	string GetAttri();
	bool GetIsSet();
	void SetIsSet(bool answer);
	void SetAttackDefense(string mode);
	int GetAttack();
	int GetDefense();
	int GetStars();
	~Cards();
private:
	string cardName;
	string cardEffect;
	string cardType;
	string cardAttribute; 
	string monsterType; 
	string attackDefense;
	bool isSet; //impletment later
	int attackPts;
	int defensePts;
	int cardStars;
};

#endif

