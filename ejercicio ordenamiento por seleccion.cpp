#include<iostream>
#include<conio.h>


using namespace std;


int main(){
	//ORDENAMIENTO POR SELECCION
	int array[]={2,3,1,5,4};
	int aux;
	int min;
	
	for(int i=0;i<5;i++){
		
		min= i;
		
		for(int j=i+1; j<5;j++){
			
			if(array[j]<array[min]){
				
				min = j;
			}
		}
		aux = array[i];
		array[i]= array[min];
		array[min]= aux;
	}
	
	cout<<"FORMA ASCENDENTE"<<endl;
	for(int i=0; i<5; i++){
		
		cout<<array[i]<<" ";
		
	}
	
	cout<<"\nNFORMA DESCENDENTE";
	for(int i=5; i>=0; i--){
		
		cout<<array[i]<<" ";
		
	}
	
	getch();
	return 0;
	
	
}
