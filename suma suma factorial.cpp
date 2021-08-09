#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	
	int number,sum=0,factorial=1;
	cout<<"digite un numero: ";cin>>number;
	
	for(int i=1; i<=number;i++){
		
		factorial*= i;
		
		sum +=factorial;
		
	}
	
	cout<<"la suma factorial es: "<<sum<<endl;
	system("pause");
	
	return 0;
}
