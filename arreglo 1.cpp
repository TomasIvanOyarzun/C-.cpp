#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){

int mult=1;

int array[] = {1,2,3,4,5};


for(int i=0 ; i<5; i++){
	mult*=array[i];
}
cout<<"la multiplicacion de mi array es: "<<mult<<endl;

system("pause");
	return 0;
}
