#pragma once
#include <string>
#include <vector>
#include <fstream>

using namespace std;

const std::vector<std::string> watIsType = { "домашние", "садовые", "дикие", "редкие", "горные" };

struct Flower 
{
public:
	char name[20];
	int type;
};

void InFlower(std::ifstream & infile, Flower &f);
void OutFlower(std::ofstream &outfile, Flower f);



void InFlower(std::ifstream & infile, Flower &f)
{
	std::string s;
	infile >> f.type >> s;
	if (s.length()<20)
		strcpy(f.name, s.c_str());
}



void OutFlower(std::ofstream &outfile, Flower f)
{
	outfile << "Это цветок, ";

	if (1 <= f.type && f.type <= watIsType.size())
	{
		outfile << "тип цветка - " << watIsType[f.type - 1];

	}
	else
	{
		outfile << "тип считался некорректно";
	}

	outfile << ", Его название: " << f.name << "\n";

}