#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numero;
	
	
	do{
	
	cout<<"digite un numero: "; cin>>numero;
	
	  if(numero<=0){
	   cout<<"digite un numero positivo !!!!!!!"<<endl;
        }
		else{
			for(int i=1; i<=10; i++){
			
			cout<<" "<<numero<<" x "<<i<<"= "<<numero*i<<endl;
		}
		}
		
   }while(numero<=0);

        getch();
	
	return 0;
}
