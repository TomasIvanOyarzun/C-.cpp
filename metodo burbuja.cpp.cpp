#include<iostream>
#include<conio.h>


using namespace std;


int main() {
		int array[5]={14,10,50,40,88};
	// metodo burbuja
	 int aux=0;
 
	
	
	
	for(int i=0;i<5;i++){
		
		for(int j=0;j<5;j++){
			if(array[i]>array[j+1]){
				 aux = array[i];
				array[i]= array[j+1];
				array[j+1]=aux;
			}
			
		}
	}
	
	cout<<"FORMA ASCENDENTE"<<endl;
	
	for(int i=0; i<5; i++){
	
	cout<<array[i]<<" ";
   
}
	cout<<"\nFORMA DESCENDENTE"<<endl;
	
	for(int i=5; i>0; i--){
	
	cout<<array[i]<<" ";
   
}

	getch();
	return 0;
}
