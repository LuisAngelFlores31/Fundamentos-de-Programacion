
	//Luis Angel Flores Salazar 24041174

#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x, tabla;
	
	cout<<"Dame el numero de la tabla que quieres generar: ";
	cin>>tabla;
	for(x=1;x<11;x++)
	{
		cout<<tabla<<"X"<<x<<"="<<tabla*x<<"\n";
	}
	for(x=1;x<11;x++)
	{
		printf("%2d X %2d = %3d\n",tabla,x,tabla*x);
		}	
	
	return 0;
}