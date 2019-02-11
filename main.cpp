#include <iostream>
#include <fstream>
#include <string>
#include "RingList.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"
#include "Client.h"

using namespace std;

int n;

int main(int amount, char* param[])
{

	setlocale(LC_ALL, "Russian");

#ifdef _DEBUG 
	
	ifstream infile("in.txt");
	ofstream outfile("out.txt");
	
#else
	
	if (amount != 3)
	{
		cout << "Ошибка в количестве параметров";
		return 1;
	}

	ifstream infile(param[1]);
	ofstream outfile(param[2]);
	
#endif


	cout << "Старт" << endl;

	RingList<Flower*> container;

	In(infile, container);

	cout << "Данные считаны с файла" << endl;

	container.Out(outfile);

	cout << "Данные выведенны в файл" << endl;

	container.Clear();

	cout << "Контейнер очищен" << endl;

	container.Out(outfile);

	cout << "Финиш" << endl;
}