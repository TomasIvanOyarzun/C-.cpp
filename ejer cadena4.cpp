#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main(){
	
	char cadena[10];
	char cadena2[10];
	
    
    	cout<<"digite una cadena: ";
    	cin.getline(cadena,10,'\n');
    	cout<<"digite una cadena: ";
    	cin.getline(cadena2,10,'\n');
    	
    	if(strcasecmp(cadena,cadena2)==0){
    		cout<<"son iguales";
		}
		else if(strcasecmp(cadena,cadena2)<0){
			cout<<cadena<<" alfabeticamente va primero";
		}
    	
    	
	
	

	
	getch();
	
	return 0;
}
