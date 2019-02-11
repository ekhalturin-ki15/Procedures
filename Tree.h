#pragma once

#include <fstream>
#include "Flower.h"


class Tree : public Flower
{
public:

	void In(ifstream &infile);
	void Out(ofstream &outfile);


private:
	__int64 year;
};