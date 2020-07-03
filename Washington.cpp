#include<iostream>
#include<string>
#include"Washington.h"
using std::cout;
using std::endl;
using std::string;

int Capitals::USA::Washington::GetNumberOfPopulation()const
{
	return numberOfPopulation;
}

string Capitals::USA::Washington::GetName()const 
{
	return name;
}

void Capitals::USA::Washington::ShowWashingtonInfo()const
{
	cout << "Name: " << name << endl;
	cout << "Number Of Population: " << numberOfPopulation << endl;
}