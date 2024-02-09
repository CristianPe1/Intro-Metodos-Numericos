
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

void RK4( float(*f)(float t , float y)) {
	
	
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
    	
        k1= (*f)(t,y);
        //printf("k1: %lf\t",k1);
        
        k2= (*f)(t+(0.5*h),y+(0.5*k1*h));
        //printf("k2: %lf\t",k2);
        
        k3= (*f)(t+(0.5*h),y+(0.5*k2*h));
        //printf("k3: %lf\t",k3);
        
        k4= (*f)(t+h,y+(k3*h));
        //printf("k4: %lf\t",k4);
        
        y= yi + (k1 + 2*k2 + 2*k3 + k4)*h/6;
        
        
        printf("%4.2f \t y%d: %6.4f\n",t,i+1,yi);
        
        yi=y;
    }
    
    printf("Programa finalizado\n");
    
}
float f1(float t, float  y){
	    
    //return pow(t, 2)-(1.1*y);
    return (float) (t-y+a)/2;
    
    
}

int main(int argc, char * argv[]) {
	
	RK4(f1);

}
