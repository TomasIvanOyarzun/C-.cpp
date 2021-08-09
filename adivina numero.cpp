#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int aleatorio,numero,contador=0;
	
	srand(time(NULL));
	aleatorio= 1+ rand()%(100);
	
	do{
		
		cout<<"digite un numero: ";cin>>numero;
		
		if(numero>aleatorio){
			cout<<"escriba un numero menor"<<endl;
		}
		else if(numero<aleatorio){
				cout<<"escriba un numero mayor"<<endl;
		}
		contador++;
	}while(numero!=aleatorio);
	
	cout<<"adivinaste el numero :D EN "<<contador<<" intentos"<<endl;
	cout<<"el numero es: "<<aleatorio;
	
	system("pause");
	
	return 0;
}
