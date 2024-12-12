    //Luis Angel Flores Salazar 24041174
	//Juan Manuel Tarin Carrillo 24041246
#include <iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int capturarCantidad() {
    int cantidad;
    do {
        cout<<"Dime cuantos numeros quieres generar (entre 2 y 40): ";
        cin>>cantidad;
    } while(cantidad<2||cantidad>40);
    return cantidad;
}

void generar(int numeros[],int cantidad){
    int contador=0;
    while (contador<cantidad){
        int numero=(rand()%cantidad)+1; 
        bool esUnico=true;

        for (int i=0;i<contador;i++) {
            if (numeros[i]==numero) {
                esUnico=false;
                break;
            }
        }

        if (esUnico){
            numeros[contador]=numero;
            contador++;
        }
    }
}

void imprimir(int numeros[],int cantidad){
    for (int i=0;i<cantidad;i+=2){
        cout<<"[";
        cout<<numeros[i];
        if (i+1<cantidad){
            cout<<","<<numeros[i+1];
        } else{
            cout<<",_"; 
        }
        cout<<"] ";
    }
    cout<<endl;
}

int main(){
    int numeros[40]; 
    int cantidad;

    cout<<"Generador de numeros unicos"<<endl;
    cantidad=capturarCantidad();

    generar(numeros,cantidad);

    cout<<"Los numeros en pares son: ";
    imprimir(numeros, cantidad);

    return 0;
}

