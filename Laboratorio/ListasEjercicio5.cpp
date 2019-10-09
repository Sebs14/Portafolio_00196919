

#include<iostream>
using namespace std;

struct nodo{
int dato;
nodo *lip;
nodo *tep;


nodo *crear(nodo *cab, int d){
nodo *nuevo= new nodo;
nuevo->dato=d;
nuevo->lip=NULL;
nuevo->tep=NULL;
cab=nuevo;
return cab;
}
nodo *insertar(nodo *cab, int d){
nodo *nuevo= new nodo;
nuevo->dato=d;
nuevo->lip=NULL;
nuevo->tep=cab;
cab->lip=nuevo;
cab=nuevo;
return cab;
}

void mostrar(nodo *cab){
nodo *aux=cab;
while(aux !=NULL){
cout<<aux->dato<<endl; 
aux=aux->tep;
}
}
void mostrar2(nodo *cab){
nodo *aux=cab;
while(aux->tep!=NULL){
aux=aux->tep;
}
while(aux !=NULL){
cout<<aux->dato<<endl; 
aux=aux->lip;
}
}
};

int main(void){

nodo *cab=NULL;
nodo *p;
cab=p->crear(cab,25);
cab=p->insertar(cab,20);
cab=p->insertar(cab,15);
    cab=p->insertar(cab,10);
    cout<<"datos de la lista"<<endl;
p->mostrar(cab);
cout<<"datos de la lista inversos"<<endl;
p->mostrar2(cab);

return 0;
}
