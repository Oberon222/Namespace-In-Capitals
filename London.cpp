#include<iostream>
#include<string>
#include"London.h"
using std::cout;
using std::endl;
using std::string;

int Capitals::England::London::GetNumberOfPopulation() const
{
	return numberOfPopulation;
}

string Capitals::England::London::GetName()const
{
	return name;
}

void Capitals::England::London::ShowLondonInfo()const
{
	cout << "Name: " << name << endl;
	cout << "Number Of Population: " << numberOfPopulation << endl;
}
