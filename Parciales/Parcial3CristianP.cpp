#include <iostream>
#include <conio.h>

using namespace std;



void ingresarA( double a[][3]){
	
	for(int i = 0 ; i<3; i++ ){
      		
   		for( int j = 0 ; j<3 ; j++){
		   
			cout<<"Ingrese el valor de a("<<i+1<<","<<j+1<<"):"<<endl;
			cin>>a[i][j];
			
		}
      		
  }	
	
}


void mostrarA( double a[][3]){
	
	
	for(int i = 0 ; i<3; i++ ){
      		
   		for( int j = 0 ; j<3 ; j++){
		   
			printf("|%.2f|",a[i][j]);
		
			
		}
      	
      	cout <<"\n"; 
  }
		
	cout <<"\n"; 
}

double multiplicador(double a1, double an){
	
	if(an == 0)	return 0;
		
	else return (double) -a1/an;
}


double opElemental( double a[][3],double m, double f){
	
	
	if(f == 2){
		
		for( int i = 0 ; i<3 ; i++){
		   
			a[1][i]=a[1][i]+a[0][i]*m;
			
		}
		
	}
		
	if(f == 3){
		
		for( int i = 0 ; i<3 ; i++){
		   
			a[2][i]=a[2][i]+a[0][i]*m;
			
		}
		
	}	
	
	
	
}


int main(){
	
	double A[3][3], m21 ,m31;
	
	ingresarA(A);
	cout <<"\nLa matriz ingresada es:"<<endl; 
	mostrarA(A);
	
	m21 = multiplicador(A[1][0], A[0][0]); 
	m31 = multiplicador(A[2][0], A[0][0]);	  
		  
	opElemental(A,m21,2);
	opElemental(A,m31,3);
	
	cout <<"\nLa matriz resultante es:"<<endl; 
	mostrarA(A);
		
}