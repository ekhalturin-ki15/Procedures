#pragma once

#include <fstream>
#include "Flower.h"

const std::vector<std::string> watIsMonth = { "������", "�������", "����", "������", "���","����", "����", "������", "��������", "�������", "������", "�������" };

struct Bush
{
	std::string name;
	int month;
};

//class Bush : public Flower
//{
//public:
//
//	void In(std::ifstream &infile);
//	void Out(std::ofstream &outfile);
//
//private:
//	
//	int month;
//};