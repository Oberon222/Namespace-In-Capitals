#pragma once
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

namespace Capitals
{
	namespace USA
	{
		class Washington
		{
			string name;
			int numberOfPopulation;
			
		public:
			Washington(string name,int numberOfPopulation) : name(name),numberOfPopulation(numberOfPopulation)
			{ }

			int GetNumberOfPopulation()const;

			string GetName()const;
			
			void ShowWashingtonInfo()const;
		};
	}

}
