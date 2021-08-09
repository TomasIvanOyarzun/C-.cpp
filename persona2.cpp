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
	
}personas[2];
	


int main(){
	
     for(int i=0; i<2; i++){
     	cout<<"digite su nombre: ";
     	cin.getline(personas[i].nombre,30,'\n');
     	cout<<"digite su edad: ";
     	cin>>personas[i].edad;
     	cout<<"digite su Pais: ";
     	cin.getline(personas[i].info.pais,30,'\n');
     	cout<<"digite su provincia: ";
     	cin.getline(personas[i].info.provincia,30,'\n');
     	cout<<"digite su Pais: ";
     	cin.getline(personas[i].info.direccion,30,'\n');
     	cout<<"\n";
     	
     	
	 }
	 
	 for(int i=0;i<2;i++){
	 	cout<<"\nNombre: "<<personas[i].nombre<<endl;
	 	cout<<"Edad: "<<personas[i].edad<<endl;
	 	cout<<"Pais: "<<personas[i].info.pais<<endl;
	 	cout<<"Provincia: "<<personas[i].info.pais<<endl;
	 	cout<<"Direccion: "<<personas[i].info.pais<<endl;
	 	
	 	
	 	
	 }

	getch();
	return 0;
}
