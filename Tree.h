#pragma once

#include <string>
#include <vector>
#include <fstream>

struct Tree
{
	std::string name;
	__int64 year;
};

Tree InTree(std::ifstream & infile);

void OutTree(std::ofstream &outfile, Tree t);