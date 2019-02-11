#pragma once

#include <fstream>
#include <algorithm>
#include "Flower.h"


class Bush : public Flower
{
public:

	void In(ifstream &infile);
	void Out(ofstream &outfile);

private:
	vector<string> watIsMonth = { "€нварь", "февраль", "март", "апрель", "май",
		"июнь", "июль", "август", "сент€брь", "окт€брь", "но€брь", "декабрь" };
	char month;
};