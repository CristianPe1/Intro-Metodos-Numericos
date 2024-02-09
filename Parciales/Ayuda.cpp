#include <iostream>
#include <cmath>

using namespace std;


int main () {
	
double x;
double xi;
double a ;  
int i;
x=1;
xi=0;
a=1;
i=1;


xi = x-a*(8*x-cos(x)-2*pow(x,2))/(8+sin(x)-4*x);
cout << "\n Paso x1: " << xi << endl;

while(fabs(8*xi-cos(xi)-2*pow(xi,2))>0.001) {
i++;
x=xi;
xi = x-a*(8*x-cos(x)-2*pow(x,2))/(8+sin(x)-4*x);

cout << "\n Paso x"<<i<<": " << xi << endl;

} 	
   
}



	
  


