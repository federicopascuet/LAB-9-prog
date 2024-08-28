#include <iostream>
#include <string>
using namespace std;

/*Etapa 1: Estructura Básica y Funciones Iniciales
Fecha límite: [21/08]

Objetivo:
Implementar la estructura básica del programa y definir las funciones principales.
Incluir la estructura transaction y las funciones para registrar transacciones y ver detalles de las transacciones.
Requisitos:
Crear el esqueleto del código, incluyendo la estructura transaction y las funciones registerTransaction y viewTransactions.
El programa debe permitir registrar una transacción y mostrar los detalles de todas las transacciones registradas.
No es necesario implementar la lógica completa de otras funciones aún, pero se deben definir y comentar los encabezados.
Entrega:
Subir el código al repositorio en GitHub.
Crear un archivo README.md que describa brevemente el propósito del proyecto y cómo ejecutar el programa.*/

struct Transaccion{// definimos la estructura base 
    string tipo;  // defino el tipo de transaccion con un string
    string nombre;  // defino el nombre del producto con un string
    int cantidad;  //defino la cantidad de productos con un int 
    float precio;  // definimos su precio con un float
    float total;
};

void RegisterTransaccion (Transaccion); // registramos la transaccion llamando a la estructura base (transaccion)
void ViewTransactions (void);

const int MaxTransaccion=100;
Transaccion transacciones [MaxTransaccion];
int Cont_Transaccion=0;


int main(){
    Transaccion t;
    RegisterTransaccion(t);
    
    ViewTransactions();
    
    
    cout << "--------------------" << endl;
    system("pause");
    

    return 0;
    

    
}


void RegisterTransaccion (Transaccion t){
cout << "ingresa tipo (compra/venta): ";
cin >> t.tipo;
cout << "ingrese nombre (producto): ";
cin >> t.nombre;
cout << "ingrese cantidad (productos): ";
cin >> t.cantidad;
cout << "ingrese precio (productos): ";
cin >> t.precio;

t.total=t.cantidad*t.precio;

transacciones[Cont_Transaccion]=t;
Cont_Transaccion++;

}

void ViewTransactions (){


    for(int i=0; i<Cont_Transaccion; i++){
    	cout << "tipo de producto: "<<transacciones[i].tipo<<endl;
		cout << "nombre del producto: "<<transacciones[i].nombre<<endl;
    	cout << "cantidad del producto: "<<transacciones[i].cantidad<<endl;
    	cout << "precio del producto: "<<transacciones[i].precio<<endl;
    	cout << "total: "<<transacciones[i].total<<endl;
	}
}




 


