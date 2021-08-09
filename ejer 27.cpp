#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	int number,aux=0,aux1=0,total=0;
	cout<<"digite un numero: ";cin>>number;
	
	for(int i=1; i<=number; i++){
		
		if(i%2==0){
			aux = aux - i;
		}
		else if(i%2!=0){
			aux1 = aux1 +i;
		}
		total = aux + aux1;
	}
     cout<<"el resultado es: "<<total;
	return 0;
}
	

	
	


