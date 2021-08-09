#include<iostream>
#include<conio.h>
#include<stdlib.h>


using namespace std;

int main(){
	
	char num[10], num2[10];
	int number=0;
	int number2=0;
	
	
	cout<<"caracter numero entero: ";
	cin.getline(num,30,'\n');
	cout<<"caracter numero real: ";
	cin.getline(num2,30,'\n');
	
     number= atoi(num);
     number2=  atof(num2);
     
     int total= number + number2;
     
	cout<<"el resultado de su suma es: "<<total;

	system("pause");
	return 0;
}
