#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int alumnos=5,nota1,nota2,nota3,uno,ultimo;
	while(alumnos!=0){
		cout<<"ingrese la nota examen1 del alumno "<<alumnos<<endl; 
		cin>>nota1;
		cout<<"ingrese la nota examen2 del alumno "<<alumnos<<endl; 
		cin>>nota2;
		cout<<"ingrese la nota examen3 del alumno "<<alumnos<<endl; 
		cin>>nota3;
		
		
		if((nota1>=7)&&(nota2>=7)&&(nota3>=7)){
			
			cout<<"El alumno: "<<alumnos<<" aprobo todos los examenes"<<endl;
		}
		else if((nota1>=7)||(nota2>=7)||(nota3>=7)){
			cout<<"El alumno: "<<alumnos<<" aprobo al menos un examen"<<endl;
		}
		if(nota3>=7){
			cout<<"El alumno: "<<alumnos<<" aprobo el ultimo examen"<<endl;
		}
	
		alumnos--;
	}
	
	system("pause");
	return 0;
}
