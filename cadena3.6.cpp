#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main(){
	
	char cadena[10];
	char cadena2[10];
	
	cout<<"digite su nombre: ";
	cin.getline(cadena,10,'\n');
	
	strcpy(cadena2,cadena);
	
	cout<<cadena2;
	
	

	
	getch();
	
	return 0;
}
