// comment header 
#include <iostream>

using namespace std;

void DisplayHeader()
{
	cout << "Welcome to super calc!" << endl;
}

double GetNumberFromUser()
{
	double numOne;
	cout << "please enter a number: ";
	cin >> numOne;
	cin.ignore;
}