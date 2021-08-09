
#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion{
	char direccion [30];
	 char ciudad[20];
	 char provincia[20];
  
};

struct Persona{
	char nombre[30];
	int edad;
	struct info_direccion info;
	
}personas[2];
	


int main(){
	
     for(int i=0; i<2; i++){
     	fflush(stdin);
     	cout<<"digite su nombre: ";cin.getline(personas[i].nombre,30,'\n');
     		
     	
     	
     	cout<<"digite su Direccion: ";cin.getline(personas[i].info.direccion,30,'\n');
     	cout<<"digite su ciudad: ";cin.getline(personas[i].info.ciudad,20,'\n');
     	
     	cout<<"digite su provincia: ";cin.getline(personas[i].info.provincia,20,'\n');
     	cout<<"digite su edad: ";cin>>personas[i].edad;
     	
     	
     	cout<<"\n";
     	
     	
	 }
	 
	 for(int i=0;i<2;i++){
	 	cout<<"\nNombre: "<<personas[i].nombre<<endl;
	 	cout<<"Edad: "<<personas[i].edad<<endl;
	 	cout<<"Ciudad: "<<personas[i].info.ciudad<<endl;
	 	cout<<"Provincia: "<<personas[i].info.provincia<<endl;
	 	cout<<"Direccion: "<<personas[i].info.direccion<<endl;
	 	
	 	
	 	
	 }

	getch();
	return 0;
}
