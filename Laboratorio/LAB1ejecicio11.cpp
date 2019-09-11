#include <iostream>

using namespace std;

//EJERCICIO 11

int NUMAY(int a){
    int aux=0;
    
    int n[a];
    
    for(int i=0; i<a ; i++){
        
        cout<<"numero "<<i+1<<": ";
        cin>> n[i];
        
    }
    
    for(int i=0; i<a; i++){
        
        if(aux<n[i]){
            
            aux=n[i];
            
            
        }
        
        
        
    }
    cout<<"El numero mayor es: "<<aux<<endl;
    
}


int main(void) {
    
    int x =0;
    cout <<"cuantos números NATURALES quieres ingresar? " << endl;
    cin>> x;
    
     NUMAY(x);
    
    

    return 0;
}

//Sebastián Flores Iraheta 00196919