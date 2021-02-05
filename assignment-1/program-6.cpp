# include <iostream>
# include <stdlib.h>

using namespace std;

int main(void)
{

system("CLEAR");

int num1;

cout << "Enter the number: ";
cin >> num1;

system("CLEAR");

if ((num1%4) == 0)
cout << "DIVISIBLE" << '\n';

else 
cout << "NOT DIVISIBLE" << '\n';

return 0;
}
