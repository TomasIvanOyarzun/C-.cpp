#include<iostream>

using namespace std;
int main(){
	float practica,teorica,participacion, notaFinal=0.0;
	// nota de practica 30% , nota teoriaca 60% , nota participacion 10%
	
	cout<<"digite la nota de practicas: "; cin>>practica;
	cout<<"digite la nota teorica: "; cin>>teorica;
	cout<<"digite la nota de participacion"; cin>>participacion;
	
	practica*=0.30;
	teorica*=0.60;
	participacion*=0.10;
	
	notaFinal = practica + teorica + participacion;
	
	cout<<"la nota final es: "<<notaFinal;
	
	
	return 0;
}
