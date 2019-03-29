#pragma once

#include <string>
#include <vector>
#include <fstream>

const std::vector<std::string> watIsMonth = { "������", "�������", "����", "������", "���","����", "����", "������", "��������", "�������", "������", "�������" };

struct Bush
{
	char name[20];
	int month;
};

void InBush(std::ifstream & infile, Bush &b);
void OutBush(std::ofstream &outfile, Bush b);