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
		container.PushBack(GetFlower(infile, type));
	}
}

Flower GetFlower(std::ifstream & infile, int type)
{
	Flower object;
	object.key = static_cast<Type> (type);
	if (type == Type::bush)
	{
		object.b = InBush(infile);
	}

	if (type == Type::tree)
	{
		object.t = InTree(infile);
	}

	return object;
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