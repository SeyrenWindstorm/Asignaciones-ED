#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
   int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};
void menu();//menu
Nodo *crearNodo(int,Nodo*);//crear nuevo nodo
void insertarNodo(Nodo*&,int,Nodo *);//insertar nodo
void mostrarArbol(Nodo*,int);//mostrararbol
void PreOrden(Nodo*);//mostrar arbol PreOrden
void InOrden(Nodo*);//mostrar arbol inorden
void PostOrden(Nodo*);//mostrar arbol PostOrden
bool Busqueda(Nodo*,int);//buscar un nodo
//Eliminar nodo
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);


Nodo*arbol = NULL;//arbol
int main(){
    menu();
return 0;
}

//menu
void menu(){
    int dato,opcion,contador=0;
    do{
        cout<<"\t Menu: \n"<<endl;
        cout<<"1. Insertar un nuevo nodo. \n"<<endl;
        cout<<"2. Buscar un nodo. \n"<<endl;
        cout<<"3. Mostrar arbol. \n"<<endl;
        cout<<"4. Mostrar recorrido del arbol en Pre-Orden.\n"<<endl;
        cout<<"5. Mostrar recorrido del arbol en In-Orden.\n"<<endl;
        cout<<"6. Mostrar recorrido del arbol en Post-Orden.\n"<<endl;
        cout<<"7. Eliminar un nodo.\n"<<endl;
        cout<<"8. Salir.\n"<<endl;
        cout<<"Opcion: "<<endl;
        cin >>opcion;

        if(opcion<0 && opcion>5)
        {
             cout<<"Opcion invalida!\n"<<endl;
        }

        switch(opcion){
           case 1: cout<<"Introduzca un numero: "<<endl;
           cin>>dato;
           insertarNodo(arbol,dato,NULL);
           system("pause");
           system("cls");

           break;

           case 2:
            cout<<"Introduzca el elemento que desea buscar: "<<endl;
            cin>>dato;
            if (Busqueda(arbol,dato) == true){
                cout<<"El elemento "<<dato<<" ha sido encontrado" <<endl;
            }
            else{
                cout<<"El elemento no se ha encontrado"<<endl;
            }
            system("pause");
            system("cls");


            break;

           case 3: if(arbol==NULL){
                    cout<<"El arbol esta vacio\n"<<endl;
                    system("pause");
                    system("cls");

                   }
                   else{
                    cout<<"Mostrando el Arbol \n\n"<<endl;
                   cout<<"\n\n";
                   cout<<"\n\n";
                   mostrarArbol(arbol,contador);
                   }
                   cout<<"\n\n";
                   cout<<"\n\n";
                   system("pause");
                   system("cls");
                   break;

                   case 4:
                   cout<<"\nRecorrido en Pre-Orden: ";
                   PreOrden(arbol);
                   cout<<"\n \n";
                   system("pause");
                   system("cls");
                   break;

                   case 5:
                   cout<<"\nRecorrido In-Orden: ";
                   InOrden(arbol);
                   cout<<"\n\n";
                   system("pause");
                   system("cls");
                   break;

                   case 6:
                   cout<<"\nRecorrido en Post-Orden: ";
                   PostOrden(arbol);
                   cout<<"\n\n";
                   system("pause");
                   system("cls");
                   break;

                   case 7:
                   cout<<"\nIntroduzca el nodo que desea eliminar: ";
                   cin>>dato;
                   eliminar(arbol,dato);
                   cout<<"\n\n";
                   system("pause");
                   system("cls");
                   break;
                   }

    }while(opcion != 8);

}

//crear un nuevo nodo
Nodo *crearNodo(int n,Nodo *padre){
     Nodo *nuevo_nodo = new Nodo();
     nuevo_nodo->dato = n;
     nuevo_nodo->der = NULL;
     nuevo_nodo->izq = NULL;
     nuevo_nodo->padre = padre;

   return nuevo_nodo;
}

//insertar elementos en el arbol
void insertarNodo(Nodo*&arbol,int n, Nodo *padre){
    if(arbol==NULL){
            Nodo*nuevo_nodo= crearNodo(n,padre);
            arbol=nuevo_nodo;
    }
    else{
        int valorRaiz = arbol->dato;
        if(n==valorRaiz)
        {
            cout<<"El dato esta repetido";
            system("pause");
            system("cls");
        }
        else
            if (n<valorRaiz){
            insertarNodo(arbol->izq,n,arbol);
        }
        else{
            insertarNodo(arbol->der,n,arbol);
        }

    }
}

void mostrarArbol(Nodo *arbol,int cont){
   if(arbol==NULL){
    return;
   }
    else{
       mostrarArbol(arbol->der,cont+1);
    for(int i=0;i<cont;i++){
        cout<<"   ";
    }
       cout<<arbol->dato<<endl;
       mostrarArbol(arbol->izq,cont+1);
}
}

//funcion para buscar un nodo
 bool Busqueda(Nodo*arbol, int n){
    if(arbol == NULL){
        return false;
    }
    else if(arbol->dato == n){
        return true;
    }
    else if (n<arbol->dato){
        return Busqueda(arbol->izq,n);
    }
    else{
        return Busqueda(arbol->der,n);
    }
 }

//recorrer arbol en pre-orden
void PreOrden(Nodo*arbol){
    if(arbol==NULL){
        return;
    }
    else{
        cout<<arbol->dato<<" - ";
        PreOrden(arbol->izq);
        PreOrden(arbol->der);
    }
}

void PostOrden(Nodo*arbol){
    if(arbol==NULL){
        return;
    }
    else{
        PostOrden(arbol->izq);
        PostOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}

void InOrden(Nodo*arbol){
    if(arbol==NULL){
        return;
    }
    else{
        PreOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        PreOrden(arbol->der);
    }
}

void eliminar(Nodo *arbol,int n){
if(arbol==NULL){
    return;
}
else if(n<arbol->dato){
    eliminar(arbol->izq,n);
}
else if(n > arbol->dato){
    eliminar(arbol->der,n);
}
else{
    eliminarNodo(arbol);
}
}

////////////funciones para eliminar el nodo//////////
void eliminarNodo(Nodo *nodoEliminar){
if(nodoEliminar->izq && nodoEliminar->der){
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
 }
 else if(nodoEliminar->izq){
        reemplazar(nodoEliminar,nodoEliminar->izq);
        destruirNodo(nodoEliminar);
 }
 else if(nodoEliminar->der){
       reemplazar(nodoEliminar,nodoEliminar->der);
       destruirNodo(nodoEliminar);
 }
 else {
    reemplazar(nodoEliminar,NULL);
    destruirNodo(nodoEliminar);
 }
}

Nodo*minimo(Nodo*arbol){
    if (arbol==NULL){
        return NULL;
    }
    if(arbol->izq){
        return minimo(arbol->izq);
    }
    else {
        return arbol;
    }
}
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
    if(arbol->padre){
        if(arbol->dato == arbol->padre->dato){
           arbol->padre->izq=nuevoNodo;
     }
     else if (arbol->dato == arbol->padre->der->dato){
        arbol->padre->der=nuevoNodo;
     }
    }
    if(nuevoNodo){
      nuevoNodo->padre = arbol->padre;
    }
}

//funcion para destruir nodo

void destruirNodo(Nodo *nodo){
nodo->izq = NULL;
nodo->der = NULL;
delete nodo;
cout<<"El nodo se ha eliminado.";
}









