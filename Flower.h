#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <functional>
#include "RingList.h"

enum { tree, bush } type;

struct Flower
{
	
	union
	{
		type key;
		Bush b;
		Tree t;
	}
};

void InAll(std::ifstream &infile, RingList<Flower*>  &container);

void OutAll(std::ofstream &outfile, RingList<Flower*>  container);

void Clear(RingList<Flower*>  &container);

