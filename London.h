#pragma once
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

namespace Capitals
{

	namespace England
	{
		class London
		{
			int numberOfPopulation;
			string name;
		public:
			London(string name, int numberOfPopulation) : name(name), numberOfPopulation(numberOfPopulation)
			{ }

			int GetNumberOfPopulation()const;

			string GetName()const;

			void ShowLondonInfo()const;
		};
	}
}
