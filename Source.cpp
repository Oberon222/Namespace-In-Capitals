#include<iostream>
#include<string>
#include"Kiev.h"
#include"London.h"
#include"Washington.h"
using namespace Capitals;

int main()
{
	USA::Washington w1("Washington", 705749);
	England::London l1("London", 8982000);
	Ukraine::Kiev k1("Kiev", 2884000);

	cout << w1.GetNumberOfPopulation() << endl;
	cout << l1.GetNumberOfPopulation() << endl;
	cout << k1.GetNumberOfPopulation() << endl;

	if (w1.GetNumberOfPopulation() > l1.GetNumberOfPopulation() && w1.GetNumberOfPopulation() > k1.GetNumberOfPopulation())
	{
		cout <<"The largest population in "<< w1.GetName() << endl;
	}
	
	else if (l1.GetNumberOfPopulation() > w1.GetNumberOfPopulation() && l1.GetNumberOfPopulation() > k1.GetNumberOfPopulation())
	{
		cout << "The largest population in " << l1.GetName() << endl;
	}

	else
	{
		cout << "The largest population in " << k1.GetName() << endl;

	}

	system("pause");
	return 0;
}
