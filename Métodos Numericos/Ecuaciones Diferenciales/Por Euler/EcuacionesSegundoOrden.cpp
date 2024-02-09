/************************************************************************\
* Programa: euler2.c
*
* Descripción: Resuleve una ecuacion diferencial de segundo orden usando *
* el metodo de Euler
*
* Ecuacion a resolver: y''(t)+100*y'(t)+1E4*y(t)=1E4*abs(sin(377t)) *
* con y(0) = 0, y'(0)=1 *
* Autor: Pedro Corcuera *
* Revisión: 1.0 4/02/2008 *
\************************************************************************/
#include<stdio.h> // I/O library
#include<stdio.h> // I/O library
#include <math.h> // Math library
#define NDERIV 2 // numero de derivadas

void derivada(int numDerivs, float *x, float t, float *k1);
int main(void);
// derivada calcula el numero de derivadas
// x array que contiene las variables de estado
// t tiempo
// k1 array que contiene en valor de las derivadas calculadas
void derivada(int numDerivs, float *x, float t, float *k1) {
	k1[0]=x[1]; // calcula derivada
	k1[1]=1.0E4*fabs(sin(377.0*t))-100*x[1]-1.0E4*x[0];
}

int main(void) {
	float yaprox; // Valores aproximados de y
	float x[NDERIV], k1[NDERIV];// arrays almacena estado de variables y derivadas
	float h=0.0001, t=0.0, tmax=0.08; // paso, tiempo, tiempo inicial, tiempo final
	int i; // indice de contador
	x[0]=0.0; // condicionles iniciales
	x[1]=0.0;
	
	printf("Solucion de ODE mediante Euler\n");
	printf(" t(ms)	\t input\t output	\n");
	
	
	for (t = 0; t < tmax; t+=h) { //ciclo for para iterar sobre el tiempo
		derivada(NDERIV, x, t, k1);
		yaprox=x[0]; // obtiene valor de y
		// Imprime resultados
		printf(" %7.4f \t %7.4f \t%7.4f\n", t, fabs(sin(377.0*t)), yaprox);
		
		// actualiza variables de estado
		for(i=0;i<NDERIV;i++){
		
			x[i] = x[i] + h*k1[i];
		}
	}
	printf("Programa finalizado\n");
}	