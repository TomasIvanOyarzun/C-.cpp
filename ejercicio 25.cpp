#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero,acumulador=0;
	
	do{
		cout<<"digite un numero: ";cin>>numero;
		
		if(numero<0){
			cout<<"debe ingresar un numero positivo!!!!"<<endl;
		}else{
			acumulador = acumulador + numero;
		}
		
	}while(((numero<20) || (numero>30)) & (numero!=0));
	
	 cout<<"\nla suma de todos los numero es: "<<acumulador<<endl;
	 
	 getch();
	 
	return 0;
}
