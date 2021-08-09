#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

int main(){
	 char cadena[]="Hola que tal";
	 char name[30];
	 
	 cout<<"escriba su nombre: ";
	 cin.getline(name,30,'\n');
	 
	 strcat(cadena,name);
	 cout<<cadena;
	
	
	
	getch();
	return 0;
}
