# include <iostream>
# include <math.h>
#include <stdlib.h>

using namespace std;

int main(void)
{

system("CLEAR");

double num1, num2;

cout << "Enter the first number: ";
cin >> num1;

system("CLEAR");

cout << "Enter the second number: ";
cin >> num2;

system("CLEAR");

cout << "Numbers: " << num1 << ", " << num2 << '\n';
cout << "Sum: " << (num1+num2) << '\n';
cout << "Difference: " << (num1-num2) << '\n';
cout << "Product: " << (num1*num2) << '\n';
cout << "Quotient: " << (num1/num2) << '\n';
cout << "Remainder: " << fmod(num1, num2) << '\n';

return 0;
}
