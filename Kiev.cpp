#include<iostream>
#include<string>
#include"Kiev.h"
using std::cout;
using std::endl;
using std::string;


int Capitals::Ukraine::Kiev::GetNumberOfPopulation()const
{
	return numberOfPopulation;
}

string Capitals::Ukraine::Kiev::GetName()const
{

	return name;

}



void Capitals::Ukraine::Kiev::ShowKievInfo()const
{
	cout << "Name: " << name << endl;
	cout << "Number Of Population: " << numberOfPopulation << endl;
}