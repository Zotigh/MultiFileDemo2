// comment header 
#include <iostream>

using namespace std;

void DisplayHeader()
{
	cout << "Welcome to super calc!" << endl;
}

double GetNumberOneFromUser()
{
	double numOne;
	cout << "please enter a number: ";
	cin >> numOne;
	cin.ignore;
	return numOne;
}

double AddNumbers(double num1, double num2)
{
	double sum;
	sum = num1 + num2;
	return sum;
}
