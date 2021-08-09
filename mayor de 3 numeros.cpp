#include<iostream>

using namespace std;

int main(){
	
	int num1, num2, num3;
	
	cout<<"digite el primer numero: "; cin>>num1;
	cout<<"digite el segundo numero: "; cin>>num2;
	cout<<"digite el terce numero: "; cin>>num3;
	
	if(num1>num2 && num1>num3){
		cout<<"El numero "<<num1<<" es mayor"<<endl;
		
	} else if(num2> num1 && num2>num3){
	    cout<<"El numero "<<num2<<" es mayor"<<endl;
	} else if (num3> num2 && num3>num1){
		cout<<"El numero "<<num3<<" es mayor"<<endl;
		
	}else{
		cout<<"Los numeros "<<num1<<" "<<num2<<" "<<num3<<" son iguales"<<endl;
	}
	
	return 0;
}
