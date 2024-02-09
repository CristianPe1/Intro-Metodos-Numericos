#include <iostream>
#include<cmath>

using namespace std;

int main(){
	
	int a,b,n,sum;
	
	while(true){
		
		cout<<"Ingrese dos numeros para a y b para la sumatoria.\n";
		
		cout<<"Ingrse el numero a: \n";
		cin>>a;
		
		cout<<"Ingrse el numero b: \n";
		cin>>b;
		
		cout<<"Hasta que termino desea la sumatorio: \n";
		cin>>n;
		
		if(a>0 && b>0 && n>0){
			
			for(int k = 1; k <= n ; k++){
				
				if( k%2 ==0 ){
			
					sum = pow(a,k) + pow(b,k);
					
				}
			} 	
			
			cout<<"El resultado de la sumatoria hasta el termino "
			<<n<<" es :"<<sum<<endl;
			break;
		}
		
		else{
			
			cout<<"Ingrese numeros validos. \n";
			continue;
			
		}
	}
}