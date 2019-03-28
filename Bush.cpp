#include "Bush.h"

Bush InBush(std::ifstream & infile)
{
	Bush b;
	infile >> b.month >> b.name;
	return b;
}



void OutBush(std::ofstream &outfile, Bush b)
{
	
	outfile << "Ёто кустарник, ";

	if (-1<b.month && b.month<12)
	{
		outfile << "мес€ц цветени€ - " << watIsMonth[b.month - 1];
		
	}
	else
	{
		outfile << "мес€ц цветени€ считалс€ некорректно";
	}

	outfile << ", ≈го название: " << b.name<<"\n";

}