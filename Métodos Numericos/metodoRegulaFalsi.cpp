#include<stdio.h>
#include<cmath>
#include <iostream>

using namespace std;

float f (float x){
		
        return  exp(x)-pow(x,3)+3*pow(x,2)-2*x-3;
    
	};


/**
a: límite inferior del intervalo
b: límite superior del intervalo
e: exactitud del valor
**/
float metodoRegulaFalsi(float a, float b,float e){
	
	

	float c;
		
	if(f(a)*f(b)==0){
	 		
		if(f(a)==0){
	 			
			return a;	
	 			
		}
			
		if(f(b)==0){
				
			return b;	
	 			
		}
	 				
	}
		
	if(f(a)*f(b)>0){
	 		
		return -1;
	 				
	}
		
		
	else{
	 		
			
		for(int i = 0; abs(f(c))<= e; i++){
		
				
			c =(f(b)*a-f(a)*b)/f(b)-f(a);
				
			if (f(a)*f(c)<0){
				
				b=c;        
		            
	        }
		    
		        
		    if (f(c)*f(b)<0){
		        	
		        a=c;       
		            
	    	}
		    	
	    	if(f(c)==0){
		    		
	    		break;
	
			}
			
				
		}
		
		return c;
		
	}
			
}


int main (int argc, char *argv[]) {
	
	     cout<<metodoRegulaFalsi(0,2,0.0000001);//retorna la raiz    
		  
    return 0;
    
}
		
