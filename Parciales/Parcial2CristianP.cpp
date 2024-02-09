#include <iostream>
#include <cmath>

using namespace std;


double f(double x)
{
	return 8*x-cos(x)-2*(x*x);
	
}

double f1(double x)
{
	return 8+sin(x)-4*x;
	
}

void newtonRaphson(double x0=1, double pre =  0.001,double alfa =1) {
	
	double x1=0.0, e = 0.0 ;  
  	int i=0;
  	
	while(true) {
    
		x1 = x0-alfa*(f(x0)/f1(x0));	
			
		e = fabs(f(x1));
		
			
    	if (fabs(f(x1)) <= fabs(f(x0))) { 
    	
	    	if(e<pre){
				
				
				cout << "\n\nCon "<<i<<" itereaciones, para una precision de " << pre << " la raiz de f es: " << x1 << endl;
				break;
				
			} else {
				
				x0 = x1;
				i++;
				cout << "\n\nPara la iteracion " << i << " ,xi es: " << x1 << endl;
			
			}
		
			
		} else {
			
			x1=x0;
			alfa=alfa/2;
			cout<<"El metodo diverge. Por lo que se aplicara el metodo con alfa: "<<alfa<<endl;
			
		}	
    
  	} 	
	
}



int main (int argc, char *argv[]) {
	
	    newtonRaphson();
		  
    return 0;
    
}



	
  


