#pragma once

#include "Flower.h"
#include "Tree.h"
#include "Bush.h"

void Flower::InAll(std::ifstream & infile, RingList<Flower*>& container)
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


void Flower::OutAll(std::ofstream & outfile, RingList<Flower*> container)
{
	ElementRL<Flower*> *it = container.begin();
	for (int i = 0; i < container.WatAmount(); i++)
	{
		it->data->Out(outfile);
		it = it->next;
	}
	

}

void Flower::Clear(RingList<Flower*>& container)
{
	ElementRL<Flower*> *it = container.begin();
	ElementRL<Flower*> *nextit;
	if (it != 0) nextit = it->next;
	for (int i = 0; i < container.WatAmount(); i++)
	{
		delete it;
		it = nextit;
		nextit = nextit->next;
	}
	container.Clear();
}