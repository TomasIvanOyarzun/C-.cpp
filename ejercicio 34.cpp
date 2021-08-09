#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	
	//5! = 5*4*3*2*1
	
	int numero;
	
	cout<<"digite un numero: "; cin>>numero;
	
	for(int i=numero-1; i>=1; i--){
		
	   numero *= i;
	   
		
	}
	cout<<"el resultado del factorial es: "<<numero<<endl;
	system("pause");
	return 0;
}
