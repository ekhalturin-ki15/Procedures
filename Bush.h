#pragma once

#include <string>
#include <vector>
#include <fstream>

const std::vector<std::string> watIsMonth = { "������", "�������", "����", "������", "���","����", "����", "������", "��������", "�������", "������", "�������" };

struct Bush
{
	std::string name;
	int month;
};

Bush InBush(std::ifstream & infile);
void OutBush(std::ofstream &outfile, Bush b);