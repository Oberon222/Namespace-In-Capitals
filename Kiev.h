#pragma once
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

namespace Capitals
{
	namespace Ukraine
	{
		class Kiev
		{
			int numberOfPopulation;
			string name;
			public:
				Kiev(string name, int numberOfPopulation) : name(name), numberOfPopulation(numberOfPopulation)
				{ }

				int GetNumberOfPopulation()const;

				string GetName()const;

				void ShowKievInfo()const;
		};
	}
}
