#pragma once

#include <string>
#include <vector>
#include <fstream>
#include "RingList.h"
#include "Bush.h"
#include "Tree.h"

enum Type { tree, bush } ;

struct Flower
{
	Type key;
	union
	{
		Bush b;
		Tree t;
	};
	Flower() {};
	~Flower() {};
	Flower(const Flower & f) {};
	Flower operator =(const Flower & f)
	{
		return f;
	}


};

void InAll(std::ifstream & infile, RingList<Flower>& container);
Flower GetFlower(std::ifstream & infile, int type);
void OutAll(std::ofstream & outfile, RingList<Flower> container);