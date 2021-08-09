#include<iostream>
#include<math.h>


using namespace std;
int main(){
	
	float x,y,result=0.0;
	
	cout<<"digite el valor de x: "; cin>>x;
	cout<<"digite el valor de y: "; cin>>y;
	
	result = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"el resultado de la funcion F(x,y) = "<<result;
	
	return 0;
}
