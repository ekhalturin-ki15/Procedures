#pragma once
#include <fstream>
#include "RingList.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"

using namespace std;

void In(ifstream &infile, RingList<Flower*> &container);

//void Out(ofstream &outfile, RingList<Flower*> &container);