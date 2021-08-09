#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

int main(){
	
	char palabra[30];
	
	
	cout<<"digite palabra en MAYUSCULA: ";cin.getline(palabra,30,'\n');
	
//	 int len = strlen(palabra);
  //      for(int i=0; i<len;i++){
  //      	if(palabra[i]=='A'){
    //    		strlwr(palabra);
    //    		cout<<palabra;
		//	}
	//	}
	
	if(palabra[0]=='A'){
		strlwr(palabra);
    	cout<<palabra;
	}
	
	getch();
	return 0;
}
