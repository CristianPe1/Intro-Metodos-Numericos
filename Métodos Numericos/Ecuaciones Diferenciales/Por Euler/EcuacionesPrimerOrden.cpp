/************************************************************************\
* Programa: euler.c
*
* Descripción: Resuleve una ecuacion diferencial de primer orden usando *
* el metodo de Euler
*
* Ecuacion a resolver: y'(t)=3*exp(-4*t)-2*y(t) con y(0) = 1 *
* La solucion exacta de esta ecuacion es: *
* y(t)=2.5*exp(-2*t)-1.5*exp(-4*t) *
* El programa se puede adaptar para resolver cualquier ecuacion EDO de *
* primer orden modificando la funcion derivada que calcula la *
* derivada y el valor de NDERIVS *
* Autor: Pedro Corcuera *
Simulación en C 12
\************************************************************************/

#include <iostream>
#include <stdio.h> // I/O library
#include <math.h> // Math library
#define NDERIV 1 // numero de derivadas

using namespace std;

void derivada(int numDerivs, float *x, float t, float *k1);
int main(void);

// derivada calcula el numero de derivadas
// x array que contiene las variables de estado
// t tiempo
// k1 array que contiene en valor de las derivadas calculadas
void derivada(int numDerivs, float *x, float t, float *k1) {
k1[0]=3*exp(-4*t)-2*x[0]; // calcula derivad
}

int main(void) {
	
	float yexact, yaprox; // Valores exactos y aproximados de y
	float x[NDERIV], k1[NDERIV];// arrays almacena estado de las variables y derivadas
	float h, t, t0, tmax, y0; // paso,tiempo,tiempo inicial,tiempo final,y inicial
	int i; // indice de contador
	
	// Lectura de intervalo de calculo
	printf("Ingresa t inicial: ");
	scanf(" %f", &t0);
	cout<<t0;
	
	printf("Ingresa t max: ");
	scanf(" %f", &tmax);
	cout<<tmax;
	
	
	// Lectura de condicion inicial
	printf("Ingresa condicion inicial: ");
	scanf(" %f", &y0);
	cout<<y0;
	
	// Lectura de paso h
	printf("Ingresa paso h: ");
	scanf(" %f", &h);
	cout<<h;
	
	
	x[0]=y0; // condiciones iniciales
	yaprox=x[0]; // resultado inicial
	
	printf("Solucion de ODE mediante Euler\n");
	printf(" t \t yexacto \tyaprox\n");


	for (t = t0; t < tmax; t+=h) { //ciclo for para iterar sobre el tiempo
	
		derivada(NDERIV, x, t, k1);
		yaprox=x[0]; // obtiene valor aproximado y exacto de y
		yexact=2.5*exp(-2*t)-1.5*exp(-4*t);
		
		// Imprime resultados
		printf(" %4.2f \t %6.4f \t%6.4f\n", t, yexact, yaprox);
		
		// actualiza variables de estado
		for(i = 0; i < NDERIV; i++){
		
		x[i] = x[i] + h*k1[i];
		
		}
	}
	
printf("Programa finalizado\n");

}