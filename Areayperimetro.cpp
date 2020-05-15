#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float radio, area, perimetro;
	
	cout<<"Asigne el radio: ";
	cin>>radio;
	
	area= 3.14 * pow(radio, 2);
	perimetro= 2 * 3.14 * radio;
	
	cout<<"El area es: "<<area<<endl;
	cout<<"El perimetro es: "<<perimetro;
	
	
	
	
	
	return 0;
}
