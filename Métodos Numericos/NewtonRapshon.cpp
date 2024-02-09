#include <iostream>
#include <cmath>

using namespace std;


double f(double x)
{
	return pow(x,3)-3*x+2;
	
}

double f1(double x)
{
	return 3*pow(x,2)-3;
	
}

void newtonRaphson(double x0, double pre) {
	
	double x1=0.0, e = 0.0 ;  
  	int i=1;
  	
	while(true) {
    
		x1 = x0-f(x0)/f1(x0);	
		e = fabs(x1 - x0);
		
		
	
    	if (f(x1) <= f(x0)) { 
    	
	    	if(e<pre){
				
				
				cout << "\n\nPara una precision de " << pre << " la raiz de f es: " << x1 << endl;
				break;
				
			} else {
				
				x0 = x1;
				i++;
				
			
			}
		
			
		} else {
			
			cout<<"El metodo diverge. "<<endl;
			break;
		}	
  	} 	
	
}



int main (int argc, char *argv[]) {
	
	    newtonRaphson(1.2,0.0000001);
		  
    return 0;
    
}



	
  


