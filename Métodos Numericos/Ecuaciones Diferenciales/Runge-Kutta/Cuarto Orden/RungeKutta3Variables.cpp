
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

float f1(float t , float x1 , float x2 ){
	    
    return (float) -0.1*x1;
    
}

float f2(float t , float x1, float x2 ){
	    
	    
    return (float) -0.1*x1-0.2*x2;
    
}

float RK43(float(*fp1)(float t , float x1 , float x2 ),  float(*fp2)(float t , float x1 , float x2 )) {
	
	int n=0;
	float a=0, h=0.5, b=20;
	float (*(fns[2]))(float , float  , float  ) = {fp1 , fp2};
    
	//fns[0]=*f1;
	//fns[1]=*f2;
	
	/*
    // Lectura de intervalo de calculo
	printf("Ingrese valor inicial del intervalo: ");
	scanf(" %f", &a);
	
	printf("Ingrese final del intervalo: ");
	scanf(" %f", &b);

	// Lectura de paso h
	printf("Ingrese paso h: ");
	scanf(" %f", &h);

    n=(int)(b-a)/h;
    
    float t[n];
	float x[2][n];//Condiciones Inciales
	float k[2][4]; //arreglo con las funciones auxiliares
    
    for(int i = 0; i<2; i++){
		
		printf("Ingrese condicion inicial de x%d: ",i+1);
		scanf(" %f", &x[i][0]);
		cout<<x[i][0];
		
	}*/
	
	n=(int)(b-a)/h;
	//cout<<n;
	float t[n];
	float x[2][n];//Condiciones Inciales
	float k[2][4]; //arreglo con las funciones auxiliares
	
	
    
    x[0][0]=5000.0;//x1_0
    x[1][0]=0.0;//x2_0
    
    /*
    for ( int i = 0; i < 2; i++ )
        {    // for para cada fila

	      for ( int j = 0; j < n; j++ )   // despliega los valores de //las columnas
	         cout<<"Elemento ("<<i+1<<","<<j+1<<"): "<< x[ i ][ j ] <<"\n";

	      cout << endl;  // inicia una nueva línea de salida

	    } // fin de la estruct
    */
    
    printf("  t \t  x1 \t  x2 \n");
    
    for(int i = 0; i<n ; i++) {
    	
    	t[i]=a+i*h;
    	//cout<<t[i];
    
	    for(int j = 0; j<2 ; j++) {//Ciclo de funciones auxiliares 1
	    	
	    	
			k[j][0]= fns[j](t[i], x[0][i], x[1][i]);
			
		}
		
	
		for(int j = 0; j<2 ; j++) {//Ciclo de funciones auxiliares 2
	    	
			k[j][1]= fns[j](t[i] + h/2, x[0][i] + h*k[0][0]/2, x[1][i] + h*k[1][0]/2);
		
		}
		
		for(int j = 0; j<2 ; j++) {//Ciclo de funciones auxiliares 3
	    	
			k[j][2]= fns[j](t[i] + h / 2, x[0][i] + h*k[0][1]/ 2, x[1][i] + h*k[1][1]/ 2);
	    	
		}
		
		for(int j = 0; j<2 ; j++) {//Ciclo de funciones auxiliares 4
	    	
			k[j][3]= fns[j](t[i] + h, x[0][i] + h*k[0][2], x[1][i] + h*k[1][2]);
	    	
		}
		
		for(int j = 0; j<2 ; j++) {//Ciclo funciónes aproximadas
	    	
			x[j][i + 1] = x[j][i] + (h/6)*(k[j][0] + 2*k[j][1] + 2*k[j][2] + k[j][3]);
	    	
		}
	      
	        
	    printf("%4.2f \t %6.2f \t %6.2f \n",t[i],x[0][i],x[1][i]);
	    
	}
    
    printf("Programa finalizado\n");
    
   
}





int main(int argc, char * argv[]) {


	
	RK43(f1,f2);

}
