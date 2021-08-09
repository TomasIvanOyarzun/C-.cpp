#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int matriz[100][100],fila,columna;
	int contador=0;
	bool frag=false;
	
	cout<<"digite la cantidad de filas: "; cin>>fila;
	cout<<"digite la cantidad de columnas: ";cin>>columna;
	
	for(int i=0; i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<"rellene la matriz ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
			
		}
	}
	
	if(fila==columna){
		for(int i=0; i<fila;i++){
			for(int j=0;j<columna;j++){
				if(matriz[i][j]==matriz[j][i]){
					frag=true;
				}
				
			}
		}
		
	}
	
	if(frag==true){
		
		cout<<"es una matriz simetrica"<<endl;
	}else{
		cout<<"NO es una matriz simetrica"<<endl;
	}
	
	getch();
	return 0;
}
