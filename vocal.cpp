#include<iostream>


using namespace std;

int main(){
	
	char character;
	
	cout<<"digite un caracter: "; cin>>character;
	
	switch(character){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"es una vocal minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"es una vocal mayuscula";break;
		default: cout<<"no es una vocal";break;	
	}
	
	
	return 0;
}
