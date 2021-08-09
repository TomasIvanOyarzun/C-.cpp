#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	// metodo burbuja
	int array[]={8,2,1,4,6,3,5,7};
	int aux=0;
	
	
	for(int i=0;i<8;i++){
		
		for(int j=0; j<8;j++){
		if(array[i]>array[j+1]){
			aux=array[i];
			array[i]= array[j+1];
			array[j+1]= aux;
			
		}
		}
	}
	cout<<"\nFORMA DESCENDENTE";
	
	for(int i=8; i>0;i--){
		cout<<array[i]<<" "<<endl;
		
	}
	
	system("pause");
	return 0;
	
}
