#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int array[10],n;
	
		cout<<"digite cuantos numeros quieres guardar en tu array: ";
		cin>>n;
	for(int i=0 ; i<n; i++){
	     cout<<"save number: ";cin>>array[i];
		
		
	}
	for(int j=n-1; j>=0; j--){
		cout<<array[j]<<endl;
	}
	
 getch();
	return 0;
}
