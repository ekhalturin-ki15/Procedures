#include "Tree.h"

Tree InTree(std::ifstream & infile)
{
	Tree t;
	infile >> t.year >> t.name;
	return t;
}


void OutTree(std::ofstream &outfile, Tree t)
{
	outfile << "��� ������, ";

	outfile << "��� " << t.year<< " ���, ";
	
	outfile << "��� ��������: " << t.name << "\n";
}