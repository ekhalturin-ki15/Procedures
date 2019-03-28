#include <iostream>
#include <fstream>
#include <string>
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"

int main(int amount, char* param[])
{

	setlocale(LC_ALL, "Russian");

	std::ifstream infile;
	std::ofstream outfile;

	if (amount == 3)
	{
		infile.open(param[1]);
		outfile.open(param[2]);
	}
	else
	{
		infile.open("in.txt");
		outfile.open("out.txt");
	}


	std::cout << "�����" << std::endl;

	RingList<Flower*> container;
	
	Flower::InAll(infile, container);

	std::cout << "������ ������� � �����" << std::endl;

	Flower::OutAll(outfile, container);

	std::cout << "������ ��������� � ����" << std::endl<<"���������� ��������: "<< container.WatAmount()<< std::endl;

	Flower::Clear(container);

	std::cout << "��������� ������" << std::endl << "���������� ��������: " << container.WatAmount() << std::endl;

	Flower::OutAll(outfile, container);

	std::cout << "�����" << std::endl;
	getchar();
}


#define TREE 1
#define BUSH 2

Flower * Flower::GetFlower(std::ifstream & infile, int type)
{
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

	return object;
}