
	//Luis Angel Flores Salazar 24041174

/*Es importante tener en cuenta que las cadenas de caracteres en C 
son arreglos de caracteres terminados en un carácter nulo ('\0'), 
mientras que los objetos string en C++ manejan internamente la 
longitud de la cadena y no requieren un carácter nulo explícito. 
Por lo tanto, si usas string en Dev-C++, no necesitas preocuparte 
por añadir el carácter nulo al final de la cadena.*/
#include<windows.h>
#include<iostream>
#include<string>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); 
	int x;
    string micadena = "Hola mundo";
    cout<<"La cadena original es: "<< micadena<<endl;
    char letra1 = micadena[0];// Acceder al primer caracter de la cadena
    cout << "La primera letra es: " << letra1 << endl;
    micadena[1] = 'e';// Modificar el segundo caracter de la cadena
    cout << "La cadena modificada es: " << micadena << endl;
    for (x=0;x<micadena.length();x++)
    	cout<<micadena[x]<<"\n";
}
