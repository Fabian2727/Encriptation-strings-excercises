# include <iostream>
#include <string>
//# include <stdlib.h>
using namespace std;

void llenar_mitad(string a)
{
	int tam = a.length();
	cout<<"Tamaño de la cadena: "<<tam<<endl;
	
	if (tam%2==0)
	{
		int midle = tam/2;
		cout<<"Mitad de la cadena: "<<midle<<endl;
		a.insert(midle,"******");
		cout<<a;
	}
	else
	{
		int midle = tam/2;
		cout<<"La cadena no tiene mitad exacta."<<endl;
		cout<<"Mitad aproximada de la cadena: "<<midle<<endl;
		a.insert(midle,"******");
		cout<<a;
	}
}

int main(){

	string x = "Pruebas";
	llenar_mitad(x);

}
