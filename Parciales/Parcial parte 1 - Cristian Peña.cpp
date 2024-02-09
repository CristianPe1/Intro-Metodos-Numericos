#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

main(){
	int x,n,N,m;
	
	cout<<"Introduzca el numero de notas a ingresar:"<<endl;
	cin>>n;
	
	while( x<n ){
		
		cout<<"Introduzca la nota numero "<<x+1<<" entre 0 a 100:"<<endl;
		cin>>N;
		
		if(0 <= N && N <= 100){
				
			if(N>m){
				
				m=N;	
				
			}
		
		}
		
		else{
		
		cout<<"Ingrese un numero valido.\n";
		continue;
		
		}
		
		x++;
		
	}
	
	cout<<"La mayor notas es de "<<m<<"."<<endl;
	
	
}
