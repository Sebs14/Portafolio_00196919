#include <iostream>
using namespace std;


struct nodo{
    float elemento;
    struct nodo *siguiente;
};
typedef struct nodo *Pila;

void initialize(Pila *s){
    *s = NULL;
}
void push(Pila *s, float e){
    struct nodo *unNodo;
    unNodo = (struct nodo *)malloc(sizeof(struct nodo));
    unNodo->elemento = e;
    unNodo->siguiente = *s;
    
    *s = unNodo;
    
}


float pop(Pila *s){
    
        struct nodo *unNodo = *s;
        float e = (*s)->elemento;
        *s = (*s)->siguiente;
        delete(unNodo);
        cout << "Nueva direccion: " << *s << endl;
        return e;
}
    
int main(){
    Pila unaPila;
    
    initialize(&unaPila);
    
    int x=0;
    
    cout<<"Digite el valor a ingresar en la pila: ";
    cin>>x;
    
    push(&unaPila, x);
    
    cout<<"El último valor de la pila es: "<< unaPila <<endl;
    
    cout<<"Pop: "<<pop(&unaPila)<<endl;
    
    cout<<"La pila esta vacia: "<<unaPila<<endl;
    
    unaPila;
    
}
