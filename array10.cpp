#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	int array[]={1,2,3,4,5},arrayTwo[5];
	

	for(int i=0; i<5; i++){
		
	arrayTwo[i]=array[i]*2;
	}
	
		for(int i=0; i<5; i++){
		
		cout<<arrayTwo[i];
		
	}
	
	
	getch();
	return 0;
}

