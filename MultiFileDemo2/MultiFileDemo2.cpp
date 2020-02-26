// MultiFileDemo2.cpp 
// comment header 

#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
    while {
        // display header 
        DisplayHeader();

        // get num1 from user
        double num1 = GetNumberOneFromUser();

        // get num2 from user
        double num2 = GetNumberOneFromUser();

        // add numbers 
        double sum = AddNumbers(num1, num2);

        //display results
        DisplayResults(num1, num2, sum);

        //doanother

    }

    return 0;
}

