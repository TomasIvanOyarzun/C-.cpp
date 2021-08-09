#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int array[100],n,acumulador=0,defecto=0;
	
	cout<<"digite cuanto elementos del array quieres llenar: ";
	cin>>n;
	for(int i=0; i<n; i++){
		
		cout<<"save number in array: "; cin>>array[i];
		 acumulador= acumulador + array[i];
	
	 
	}
	
	for(int j=0; j<n;j++){
		
		if(acumulador-array[j]==array[j]){
			
			cout<<"El numero "<<array[j]<<" de la posicion "<<j<<" es equivalente a la suma del resto de los numeros"<<endl;
			defecto=defecto+1;
		}
		if(defecto==0){
		cout<<"Ningún numero es equivalente a la suma del resto"<<endl;
	}
	}
	 cout<<acumulador<<endl;
	 
	
	system("pause");
	return 0;
}
