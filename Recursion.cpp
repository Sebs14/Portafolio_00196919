

#include <iostream>
using namespace std;

int mult(int a, int c){
	if(c==1){
		cout << "c=" << c << " caso base" << endl;
		return 1;
	}else{
		return a + a*(c-1);
	}
	
	
}int main(){
	
	int a=0;
	int c=0;
	
	cout << "Ingrese el valor de el primer n�mero: "<< endl;
	cin >> a;
	
	cout << "Ingrese el valor de el segundo n�mero: "<< endl;
	cin >> c;
	
		int respuesta = mult(a,c);
		cout << "Resultado de la multiplicacion de "<< a << " por " << c << " es: " << respuesta << endl;


return 0;
}
