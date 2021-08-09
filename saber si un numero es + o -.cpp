#include<iostream>


using namespace std;

int main(){
	
	int num;
	
	cout<<"ingrese un numero: "; cin>>num;
	
	if(num==0){
		cout<<"el  numero es 0";
	}
	else if(num>0){
		cout<<"el  numero: "<<num<<" es positivo";
	}else{
	 cout<<"el  numero: "<<num<<" es negativo";	
	}
	
	return 0;
}
