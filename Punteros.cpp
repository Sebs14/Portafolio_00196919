#include <iostream>
using namespace std;

void calculos(int num, int *doble, int *triple){

	*doble= 2 * num;
	*triple= 3 * num;	
	cout<<"El valor del puntero doble: "<<(*doble)<<endl<<"El valor del puntero triple: "<<(*triple)<<endl;
	
}


int main()
{
	
	int numero = 2, doble = 0, triple = 0;
	calculos(numero, &doble, &triple);
	
	cout<<"la direccion del numero es: "<< &numero<<endl<<"la direccion de su doble es: "<< &doble<<endl<<"y la direccion de su triple es: "<<&triple<<endl;
	
	
	
	
	cout<<"El doble de 2 es "<<doble<<endl;
	
	
	cout<<"El triple de 2 es "<<triple<< endl;
	
	return 0;
	
	
}