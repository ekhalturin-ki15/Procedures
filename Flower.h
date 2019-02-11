#pragma once
#include <string>
#include <vector>
#include "RingList.h"


using namespace std;

//Родительский класс наследования

class Flower
{
public:

	virtual void In(ifstream &infile)=0;
	virtual void Out(ofstream &outfile) =0;

	//void ClientIn(ifstream &infile, RingList<Flower*> &container);

protected:
	string name;
};