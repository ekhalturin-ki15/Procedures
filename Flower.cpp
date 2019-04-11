#pragma once

#include "Flower.h"

using namespace std;

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

void Sort(RingList<Flower>& container)
{
	vector<Flower*> mass;
	ElementRL<Flower> *it = container.begin();
	for (int i = 0; i < container.WatAmount(); i++)
	{
		mass.push_back(&(it->data));
		it = it->next;
	}

	QSort(mass, 0, mass.size() - 1);
}

void QSort(vector<Flower*>& mass, int l, int r)
{
	int i = l, j = r;
	Flower* p = mass[(l + r) / 2];
	while (true)
	{

		while (cmp(p,mass[i]) == 1) i++;

		while (cmp(p, mass[j]) == -1) j--;

		if (i <= j)
		{
			std::swap(mass[i], mass[j]);

			i++;
			j--;
		}
		if (i > j) break;
	}

	if (l < j) QSort(mass, l, j); //then QuickSort(l, j);
	if (i < r) QSort(mass, i, r); //then QuickSort(i, r);
}

int cmp(Flower* l, Flower* r)
{
	vector<Flower*> v; v.push_back(l); v.push_back(r);
	vector<int> value;
	for (int i = 0; i < 2; i++)
	{
		switch (v[i]->key)
		{
		case Type::tree:
			value.push_back(TreeAmount(v[i]->t));

			break;
		case Type::bush:
			value.push_back(BushAmount(v[i]->b));

			break;
		}
	}

	if (value[0] > value[1]) return 1;
	if (value[0] < value[1]) return -1;
	return 0;
}