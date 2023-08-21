#include <iostream>
#include <string>
using namespace std;

int main()
{
	//output type of cheese
	string cheeseType;
	getline(cin, cheeseType);

	//edge case for empty cheese type
	if (cheeseType == "")
	{
		cout << "---" << endl;
		cout << "You must enter a cheese type" << endl;
		return 1;
	}
	else
		cout << "Cheese type: " << cheeseType << endl;

	//taking input of value
	cout.setf(ios::fixed);
	cout.precision(2);
	double value;
	cin >> value;
	cout << "Value: " << value << endl;
	cin.ignore(10000, '\n');

	//edge case for negative value
	if (value <= 0)
	{
		cout << "---" << endl;
		cout << "The value must be positive" << endl;
		return 1;
	}
	else
	{
		;
	}

	//Calculation for first parameter
	double firstCalc;
	if (value > 1000)
		firstCalc = 1000 * 0.013;
	else
		firstCalc = value * 0.013;

	//Calculation for second parameter
	double secondCalc;
	if (value > 1000)
		if (value <= 12000)
			if (cheeseType == "cheshire" || cheeseType == "stilton")
				secondCalc = (value - 1000) * 0.012;
			else
				secondCalc = (value - 1000) * 0.020;
		else
			if (cheeseType == "cheshire" || cheeseType == "stilton")
				secondCalc = 11000 * 0.012;
			else
				secondCalc = 11000 * 0.020;
	else
	{
		;
	}

	//Calculation for third parameter
	double thirdCalc;
	if (value > 12000)
		thirdCalc = (value - 12000) * 0.027;

	//Calculation for total value
	double totalValue;
	if (value <= 1000)
		totalValue = firstCalc;
	else if (value <= 12000)
		totalValue = firstCalc + secondCalc;
	else
		totalValue = firstCalc + secondCalc + thirdCalc;

	//output the importer
	string importer;
	getline(cin, importer);
	cout << "Importer: " << importer << endl;

	//edge case for empty importer
	if (importer == "")
	{
		cout << "---" << endl;
		cout << "You must enter an importer" << endl;
		return 1;
	}
	else
	{
		cout << "---" << endl;
		cout << "The import duty for " << importer << " is $" << totalValue << endl;
	}
	//output statement if no errors
}