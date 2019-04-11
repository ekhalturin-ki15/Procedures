﻿#pragma once

#include <string>
#include <vector>
#include <set>
#include <fstream>

const std::vector<std::string> watIsMonth = { "январь", "февраль", "март", "апрель", "май","июнь", "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь" };

struct Bush
{
	char name[20];
	int month;
};

void InBush(std::ifstream & infile, Bush &b);
void OutBush(std::ofstream &outfile, Bush b);

int BushAmount(Bush b);