#ifndef MAGICZONE_H
#define MAGICZONE_H

#include "Field.h"
#include "Hand.h"
#include <vector>

class MagicZone :
	public Field
{
public:
	MagicZone();
	MagicZone(int size, string type);
	void PlayMagicCard(Hand hand, string card, string mode);
	void ShowMagicZone();
	vector<Cards> GetMagicZone();
	~MagicZone();
private:
	vector<Cards> magicZone;
};

#endif

