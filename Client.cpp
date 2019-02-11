#include "Client.h"

#define TREE 1
#define BUSH 2

void In(ifstream &infile, RingList<Flower> &container)
{
	int type = 0;

	while(true)
	{

		infile >> type;
		if (!type) break;
		//Значит ввод не закончен
		Flower *object;


		if (type == TREE)
		{
			object = new Tree;
			

		}

		if (type == BUSH)
		{
			object = new Bush;
		}

		object->In(infile);
		container.PushBack(object);
		delete object;
	}

}