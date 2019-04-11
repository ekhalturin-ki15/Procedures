#pragma once

#include "Flower.h"


void InAll(std::ifstream & infile, RingList<Flower>& container)
{
	int type;

	while (true)
	{
		type = 0;
		infile >> type;
		if (!type) break;
		Flower object;
		GetFlower(infile, type, object);
		container.PushBack(object);
	}
}

void GetFlower(std::ifstream & infile, int type, Flower& object)
{
	object.key = static_cast<Type> (type - 1);
	switch (object.key)
	{
	case Type::tree:
		InTree(infile, object.t);
		break;
	case Type::bush:
		InBush(infile, object.b);
		break;
	}

}

void OutAll(std::ofstream & outfile, RingList<Flower> container)
{
	ElementRL<Flower> *it = container.begin();
	for (int i = 0; i < container.WatAmount(); i++)
	{
		switch (it->data.key)
		{
		case Type::tree:
			OutTree(outfile, it->data.t);
			break;
		case Type::bush:
			OutBush(outfile, it->data.b);
			break;
		}
		it = it->next;
	}
}
