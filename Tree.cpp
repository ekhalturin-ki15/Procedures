#include "Tree.h"

Tree InTree(std::ifstream & infile)
{
	Tree t;
	infile >> t.year >> t.name;
	return t;
}


void OutTree(std::ofstream &outfile, Tree t)
{
	outfile << "Это дерево, ";

	outfile << "ему " << t.year<< " лет, ";
	
	outfile << "Его название: " << t.name << "\n";
}