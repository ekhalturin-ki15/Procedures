#include "Bush.h"

void Bush::Out(std::ofstream &outfile)
{
	
	outfile << "��� ���������, ";

	if (-1<month && month<12)
	{
		outfile << "����� �������� - " << watIsMonth[month - 1];
		
	}
	else
	{
		outfile << "����� �������� �������� �����������";
	}

	outfile << ", ��� ��������: " << name<<"\n";

}


void Bush::In(std::ifstream &infile)
{
	std::string s;
	infile >> this->month >> this->name;

}