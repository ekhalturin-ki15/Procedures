#include "Bush.h"

Bush InBush(std::ifstream & infile)
{
	Bush b;
	infile >> b.month >> b.name;
	return b;
}



void OutBush(std::ofstream &outfile, Bush b)
{
	
	outfile << "��� ���������, ";

	if (-1<b.month && b.month<12)
	{
		outfile << "����� �������� - " << watIsMonth[b.month - 1];
		
	}
	else
	{
		outfile << "����� �������� �������� �����������";
	}

	outfile << ", ��� ��������: " << b.name<<"\n";

}