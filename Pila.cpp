#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregar(Nodo *&, int);
void eliminar(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int dato; 
    
    cout<<"Ingrese un numero: ";
    cin>>dato;
    agregar(pila, dato);

    cout<<"\nIngrese un numero: ";
    cin>>dato;
    agregar(pila, dato);

    cout<<"\nIngrese un numero: ";
    cin>>dato;
    agregar(pila, dato);

    cout<<"\nEliminando elementos de la pila: ";

    while(pila != NULL){
        eliminar(pila, dato);
        if (pila != NULL){
            cout<<dato<<" , ";
        }
        else {
            cout<<dato<<".";
        }
    }

    return 0;
}

//AGREGA ELEMENTOS A LA PILA
void agregar(Nodo *&pila, int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"Elemento "<<n<<" agregado exitosamente"<<endl;
}

//ELIMINA ELEMENTOS DE LA PILA
void eliminar(Nodo *&pila, int &n) {
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}