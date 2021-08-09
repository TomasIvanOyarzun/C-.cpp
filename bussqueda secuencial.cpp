#include<iostream>
#include<conio.h>


using namespace std;


int main(){
	//ORDENAMIENTO POR SELECCION
	int array[]={2,3,1,5,4};
	int dato=3;
    bool frag = false;
    int aux;
    int i=0;
//	for(int i=0;i<5;i++){
//		
//		if(array[i]==dato){
//			frag = true;
//			aux++;
//		}
//	}
//	
//	if(frag==true){
//		cout<<"el numero esta en el array en la posicion: "<<aux;
//	}else{
//			cout<<"el numero no esta en el array";
//	}
	
	
	
	while((frag==false )&&(i<5)){
		if(array[i]==dato){
			
			frag=true;
		}
		
		i++;
		
		
	}
	if(frag==true){
			cout<<"el numero esta en el array en la posicion: "<<i;
	}else{
			cout<<"el numero no esta en el array";
	}
	
	
	getch();
	return 0;
	
	
}
