#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	 
	 int cant;
	float pre, gasto;
	char prod[10];
	cout<<"Introduzca el producto comprado: "<<endl;
	cin>>prod;
	cout<<"Introduza la cantidad que compro: "<<endl;
	cin>>cant;
	cout<<"Introduzca el precio del producto: "<<endl;
	cin>>pre;
	
	gasto= pre*cant;
	
	cout<<"El total del dinero gastado es: "<<gasto; 
	
	
	
	return 0;
	
}
