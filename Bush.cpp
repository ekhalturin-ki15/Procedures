#include "Bush.h"

void Bush::Out(ofstream &outfile)
{
	
	outfile << "Ёто кустарник, ";

	if (-1<month && month<12)
	{
		outfile << "мес€ц цветени€ - " << watIsMonth[month - 1];
		
	}
	else
	{
		outfile << "мес€ц цветени€ считалс€ некорректно";
	}

	outfile << ", ≈го название: " << name<<"\n";

}


void Bush::In(ifstream &infile)
{
	string s;
	infile >> this->month >> this->name;
	this->month -= '0';

}