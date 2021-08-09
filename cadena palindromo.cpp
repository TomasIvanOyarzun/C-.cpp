#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

int main(){
	 
	 
	 char palabra[30],palabra2[30];
	 do{
	 
	 cout<<"escriba palabra: ";
	 cin.getline(palabra,30,'\n');
     
     strcpy(palabra2,palabra);
     strrev(palabra);
     if(strcasecmp(palabra,palabra2)==0){
     	cout<<"es palindromo";
     	
	 }else{
	 	cout<<"no es palindromo !!! INTENTE DE NUEVO"<<endl;
	 }
} while(strcasecmp(palabra2,palabra)!=0);
	
	getch();
	return 0;
}
