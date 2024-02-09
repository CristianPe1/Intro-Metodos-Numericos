#include <iostream>
#include <cmath>

using namespace std;


double f(double x)
{
	return x*exp(-x);
	
}

double f1(double x)
{
	return (1-x)*exp(-x);
	
}

void newtonRaphson(double x0, double pre, double alfa) {
	
	double x1=0.0, e = 0.0 ;  
  	int i=1;
  	
	while(true) {
	
		
		x1 = x0-alfa*(f(x0)/f1(x0));	
		e = fabs(x1 - x0);
		cout<<"\nf(x1): "<<f(x1);
		cout<<"\nf(x0): "<<f(x0);
		
    	if (f(x1) <= f(x0)) { 
    		cout<<"\n";
    	
	    	if(e<pre){
				
				
				cout << "\n\nPara una precision de " << pre << " la raiz de f es: " << x1 << endl;
				break;
				
			} else {
				
				cout<<"RRRR";
				x0 = x1;
				i++;
				
			
			}
		
			
		} else {
			
			x1=x0;
			alfa=alfa/2;
			cout<<"El metodo diverge. Por lo que se aplicara el metodo con alfa: "<<alfa<<endl;
			i++;
			
		
		}	
    
  	} 	
	
}



int main (int argc, char *argv[]) {
	
	    newtonRaphson(1.2,0.5,1);
		  
    return 0;
    
}



	
  


