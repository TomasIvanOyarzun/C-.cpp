#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cadena[20];
	int longitud=0;
	
	cout<<"digite una cadena de caracteres: ";
	cin.getline(cadena,20,'\n');
	
	longitud = strlen(cadena);
	if(longitud>10){
		cout<<cadena<<endl;
	}else{
		cout<<"cadena menor a 10";
	}
	
	getch();
	return 0;
}
