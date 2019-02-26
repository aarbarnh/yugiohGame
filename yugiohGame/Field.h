#ifndef FIELD_H
#define FIELD_H
#include <string>

using namespace std;

class Field
{
public:
	Field();
	Field(int size, string type);
	~Field();
protected:
	int fieldSize;
	string fieldType;
};

#endif

