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

if ((num1%2) == 0)
cout << num1 << " is even" << '\n';

else 
cout << num1 << " is odd" << '\n';

return 0;
}
