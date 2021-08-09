#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int hola[100],n,l;
	
	cout<<"Hola amigo, escribe cuantos valores quieres que te mostremos "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>hola[i];
	}
	n=n-1;
	cout<<"Toma "<<endl;
	for(int h=n;h>0;h=h-1){
		cout<<hola[h];
	}
	n=0;
	cout<<hola[n];
	return 0;
	getch();
}
