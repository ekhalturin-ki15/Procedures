#pragma once

#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include "Flower.h"

const vector<string> watIsMonth = { "€нварь", "февраль", "март", "апрель", "май","июнь", "июль", "август", "сент€брь", "окт€брь", "но€брь", "декабрь" };


class Bush : public Flower
{
public:

	void In(ifstream &infile);
	void Out(ofstream &outfile);

private:
	
	char month;
};