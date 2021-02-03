# include <iostream> 

# include <cmath> 

#include <stdlib.h> 

 
 

using namespace std; 

 
 

int main(void) 

{ 

 
 

system("CLEAR"); 

 
 

double c; 

 
 

cout << "Enter the temperature in celsius: "; 

cin >> c; 

 
 

system("CLEAR"); 

 
 

cout << "Temperature in celsius: " << c << "°C" << '\n'; 

cout << "Fahrenheit: " << ((c*9/5) + 32) << "°F" << '\n'; 

 
 

return 0; 

} 
