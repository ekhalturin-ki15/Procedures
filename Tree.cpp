#include "Tree.h"

void Tree::Out(std::ofstream &outfile)
{
	outfile << "��� ������, ";

	outfile << "��� " << year<< " ���, ";
	
	outfile << "��� ��������: " << name << "\n";
}


void Tree::In(std::ifstream &infile)
{
	infile >> this->year >> this->name;
}