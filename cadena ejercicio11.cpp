#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

int main(){
	
	char palabra[30],palabra2[30];
	
	
	cout<<"digite primera palabra: ";cin.getline(palabra,30,'\n');
	cout<<"digite segunda palabra: ";cin.getline(palabra2,30,'\n');
	 strupr(palabra);
	
	 if(strcasecmp(palabra,palabra2)==0){
	 	
	 	cout<<palabra<<" y "<<palabra2<<" son iguales";
	 }else{
	 	
	 	cout<<palabra<<" y "<<palabra2<<" no son iguales";
	 }
	
	
	getch();
	return 0;
}
