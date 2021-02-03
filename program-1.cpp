# include <iostream> 

# include <cmath> 

#include <stdlib.h> 

 
 

using namespace std; 

 
 

int main(void) 

{ 

 
 

system("CLEAR"); 

 
 

const float pi = 3.14; 

double rad, area, circum; 

 
 

cout << "Enter the radius of the circle: "; 

cin >> rad; 

 
 

area = pi*pow(rad, 2); 

 
 

circum = 2*pi*rad; 

 
 

system("CLEAR"); 

 
 

cout << "Radius: " << rad << '\n'; 

cout << "Area: " << area << '\n'; 

cout << "Circumference: " << circum << '\n'; 

 
 

return 0; 

} 
