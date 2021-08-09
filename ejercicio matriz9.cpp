#include<iostream>
#include<conio.h>

using namespace std;



int main(){
	
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matrizDos[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	
	cout<<"MATRIZ 1\n";
	for(int i=0;i<3;i++){
		
		for(int j=0; j<3;j++){
			
			
			cout<<matriz[i][j]<<" ";
		  
			
		}
		cout<<"\n";
	}
	cout<<"MATRIZ 2\n";
	for(int i=0; i<3;i++){
		
		for(int j=0; j<3;j++){
			
			cout<<matrizDos[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"SUMA\n";
	for(int i=0 ; i<3;i++){
		
		for(int j=0; j<3;j++){
			cout<<matriz[i][j] + matrizDos[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
