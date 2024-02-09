
//  RungeKutta.cpp
//
//  Created bx2 Cristian Peña
//


//Realizar para varias variables
//Mirar si se puede usar como parametros lista de funciones
//Etportar los datos en una matriz


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

float a = 2;
float t,y;
float arr[2] = {t,y};

void RK4( float(*f)(float arr[])) {
	
	
    float k1, k2, k3, k4; 
	float t=0,y=0,a=0, h=0, n=0, b=0;
    float yi=0;//Condiciones Inciales
    
    // Lectura de intervalo de calculo
	printf("Ingrese valor inicial del intervalo: ");
	scanf(" %f", &a);
	
	printf("Ingrese final del intervalo: ");
	scanf(" %f", &b);

	
	
	//Lectura de condicion inicial
	printf("Ingrese condicion inicial: ");
	scanf(" %f", &y);

	
	// Lectura de paso h
	printf("Ingrese paso h: ");
	scanf(" %f", &h);
	
	
    
    n=(b-a)/h;
    
    printf(" t \t yaprox\n");
    
    for(int i = 0; i<n ; i++) {
    	
		t=a+i*h;
    	
    	arr[0]=t;
    	arr[1]=y;
        k1= (*f)(arr);
        //printf("k1: %lf\t",k1);
        
        arr[0]=t+(0.5*h);
    	arr[1]=y+(0.5*k2*h);
        k2= (*f)(arr);
        //printf("k2: %lf\t",k2);
        
        arr[0]=t+(0.5*h);
    	arr[1]=y+(0.5*k2*h);
        k3= (*f)(arr);
        //printf("k3: %lf\t",k3);
        
        arr[0]=t+h;
    	arr[1]=y+(k3*h);
        k4= (*f)(arr);
        //printf("k4: %lf\t",k4);
        
        yi= y + (k1 + 2*k2 + 2*k3 + k4)*h/6;
        
        
        printf("%4.2f \t y%d: %6.4f\n",t,i+1,yi);
        
        y=yi;
    }
    
    printf("Programa finalizado\n");
    
}
float f1(float arr[2]){
	    
    //return pow(t, 2)-(1.1*y);
    return (float) (arr[0]-arr[1]+ a)/2;
    
    
}

int main(int argc, char * argv[]) {
	
	RK4(f1);

}
