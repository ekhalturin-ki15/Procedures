#pragma once

#include <fstream>
#include "Flower.h"

struct Tree
{
	std::string name;
	__int64 year;
};

//class Tree : public Flower
//{
//public:
//
//	void In(std::ifstream &infile);
//	void Out(std::ofstream &outfile);
//
//
//private:
//	__int64 year;
//};