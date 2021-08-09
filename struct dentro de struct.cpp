#include<iostream>
#include<conio.h>

using namespace std;



struct info_direccion{
	char pais[30];
	char provincia[30];
	char direccion[30];
	 
};

struct Persona{
	char nombre[30];
	struct info_direccion info;
	int edad;
	
}persona1;
	


int main(){
	
	 cout<<"digite su pais: ";
		
     cout<<"digite su nombre: ";
     
     cin.getline(persona1.nombre,30,'\n');
     cout<<"digite su edad: ";
     
     cin>>persona1.edad;
     
     
     
	cout<<"\nNombre : "<<persona1.nombre<<endl;
	cout<<"Edad : "<<persona1.edad;

	

	getch();
	return 0;
}
