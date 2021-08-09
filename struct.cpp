#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
	
}   persona1;
	


int main(){
	
	
		
     cout<<"digite su nombre: ";
     cin.getline(persona1.nombre,30,'\n');
     cout<<"digite su edad: ";
     cin>>persona1.edad;
	cout<<"\nNombre : "<<persona1.nombre;
	cout<<"Edad : "<<persona1.edad;
	

	getch();
	return 0;
}
