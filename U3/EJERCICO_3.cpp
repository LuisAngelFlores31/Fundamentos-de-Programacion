
	//Luis Angel Flores Salazar 24041174

#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    long int i=0;
    long int j=1;
    long int y;
    cout<<"CODIGO PARA IR SUMANDO UN NUMERO"<<"\n";
    
    for(x=0;x<num1;x++)
    {
    	cout<<"Ingresa 0 para comenzar"<<"\n";
    	cin>>num1;
    	if (x-=num1 || x++)
	{
		cout<<x;
		continue;
	}else{
		{
    	cout<<"Ingresa 1 para continuar"<<"\n";
    	cin>>num1;
    	if (x-=num1 || x++)
	{
		cout<<x;
		continue;
	}}
	}
	}
    
	return 0;
}