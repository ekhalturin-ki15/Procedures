#include "Bush.h"

void InBush(std::ifstream & infile, Bush &b)
{
	std::string s;
	infile >> b.month >> s;
	if (s.length()<20)
		strcpy(b.name, s.c_str());
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