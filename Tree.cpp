#include "Tree.h"

void Tree::Out(ofstream &outfile)
{
	outfile << "Это дерево, ";

	outfile << "ему " << year<< " лет, ";
	
	outfile << ", Его название: " << name;
}


void Tree::In(ifstream &infile)
{
	infile >> this->year >> this->name;
}