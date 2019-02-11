#include "Bush.h"

void Bush::Out(ofstream &outfile)
{
	outfile << "Ёто кустарник, ";

	if (month == -1)
	{
		outfile << "мес€ц цветени€ считалс€ некорректно";
	}
	else
	{
		outfile << "мес€ц цветени€ "<< watIsMonth[month];
	}

	outfile << ", ≈го название: " << name;

}


void Bush::In(ifstream &infile)
{
	string s;
	infile >> s >> this->name;

	this->month = -1;

	int i = 0;
	for (auto it : watIsMonth)
	{
		if (s == it)
		{
			this->month = i;
			break;
		}
		i++;
	}

}