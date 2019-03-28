#include <iostream>
#include <fstream>
#include <string>
#include "Flower.h"

const int StandartInpAtr = 3;

int main(int amount, char* param[])
{

	setlocale(LC_ALL, "Russian");

	std::ifstream infile;
	std::ofstream outfile;

	if (amount == StandartInpAtr)
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

	RingList<Flower> container;

	InAll(infile, container);

	std::cout << "������ ������� � �����" << std::endl;

	OutAll(outfile, container);

	std::cout << "������ ��������� � ����" << std::endl << "���������� ��������: " << container.WatAmount() << std::endl;

	container.Clear();

	std::cout << "��������� ������" << std::endl << "���������� ��������: " << container.WatAmount() << std::endl;

	OutAll(outfile, container);

	std::cout << "�����" << std::endl;

	
	getchar();

}