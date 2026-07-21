/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num, temp, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    if (num % sum == 0)
        cout << num << " is a Harshad Number.";
    else
        cout << num << " is not a Harshad Number.";

    return 0;
}