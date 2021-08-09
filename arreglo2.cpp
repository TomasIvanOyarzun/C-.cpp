#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"digite un numero de elementos que va atener un arreglo: "; cin>>n;
	for(int i=0; i<n;i++){
		cout<<"digite un numero: "; 
		cin>>numeros[i];
		
	}
	for(int i=0; i<n;i++){
		
		cout<<i<<"-->"<<numeros[i]<<endl;
	}
	
 getch();
	
	return 0;
}
