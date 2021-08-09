#include<iostream>
#include<conio.h>


using namespace std;


int main(){
	int fila[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
	
	
	
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			
		
			cout<<fila[i][j];
		}
		
		cout<<"\n";
	}
	
	
		for(int i=0; i<3; i++){
		
		for(int j=0; j<3; j++){
			
			if(fila[i]==fila[j]){
				
				cout<<fila[i][j]<<endl;
			}
		}
		
	}
	
	
	getch();
	return 0;
}
