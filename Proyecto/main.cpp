//Main del modelo que integre funciones SEIRD con RungeKutta


//Pedir condiciones inciales
//Introducirlo en un arreglo


#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

main(){
	int a,b,n;
	string n;
	float a,pre,desc;
	
	
	invitacion1();cin>>n;
	
	invitacion2();
	cin>>a;
	cin>>b;
	
	mi = min(a,b)
	ma = max(a,b)
	
	resultado(n,a,b)
	
}


/* Prototipo */
int addition(int, int);
/* Función principal */

void invitacion1(){
	
	cout<<"Que desea buscar:\n1)Minimo\n2)Maximo "<<endl;
	
	
}


void invitacion2(){
	
	cout<<"\nIntroduzca los dos numeros a comparar:"<<endl;
	
	
}

int max(){
		
	if(a<b) return b;
		
	if(a>b) return a;
	
}
	
	
int min(){
	
	
	if(a>b) return b;
		
	if(a<b) return a;
		
    
}

void resultado(n,a,b){
	
	if(n==1){
		
		if(a<b) return cout<<a<<"es el valor  minimo"<<
		
		if(a>b) return cout<<b<<"es el valor  maximo"<<
		
	}
	
	if(n == 2){	
	
		if(a>b) return cout<<a<<"es el valor  maximo"<<
		
		if(a<b) return cout<<b<<"es el valor  maximo"<<
		
	}
}

