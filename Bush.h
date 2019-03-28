#pragma once

#include <string>
#include <vector>
#include <fstream>

const std::vector<std::string> watIsMonth = { "€нварь", "февраль", "март", "апрель", "май","июнь", "июль", "август", "сент€брь", "окт€брь", "но€брь", "декабрь" };

struct Bush
{
	std::string name;
	int month;
};

Bush InBush(std::ifstream & infile);
void OutBush(std::ofstream &outfile, Bush b);