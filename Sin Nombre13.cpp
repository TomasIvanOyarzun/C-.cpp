#include<iostream>

using namespace std;

int main(){
	
	
	int num;
	
	cout<<"digite su edad: ";cin>>num;
	
	if((num>=12)&&(num<=17)){
		cout<<"el numero esta en el rango [12-17] eres adolecente";
	} else if((num>=18)&&(num<=99)){
		cout<<"el numero esta en el rango [18-60] eres adulto";
	} else{
		cout<<"eres bebe";
	}
	
	return 0;
}
