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
	Flower& operator= (const Flower &object)
	{
		key = object.key;
		switch (object.key)
		{
		case Type::tree:
			t = object.t;
			break;
		case Type::bush:
			b = object.b;
			break;
		}
		return *this;
	}


};

void InAll(std::ifstream & infile, RingList<Flower>& container);
void GetFlower(std::ifstream & infile, int type, Flower& object);
void OutAll(std::ofstream & outfile, RingList<Flower> container, bool filter = false);

