#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	int matriz[10][10],nuevaMatriz[10][10],fila,columna;
	
	cout<<"digite el numero de fila de la Matriz: ";
	cin>>fila;
	cout<<"digite el numero de columna de la Matriz: ";
	cin>>columna;
	
	for(int i=0; i<fila;i++){
		
		for(int j=0; j<columna;j++){
			
		  int num=1+rand()%(100);
		  matriz[i][j]=num;
		  nuevaMatriz[i][j]=matriz[i][j];
		  
		}
	}
	
		for(int i=0; i<fila;i++){
		
		for(int j=0; j<columna;j++){
			
		 cout<<nuevaMatriz[i][j]<<" ";
		  
		}
		cout<<"\n";
	}
	system("pause");
	

	return 0;
}
