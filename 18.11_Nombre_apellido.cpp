# include <iostream>
#include <string>
//# include <stdlib.h>
using namespace std;

void unir(string a, string b)
{
	string c= a+" "+b;
	cout<<c;	
}

int main(){ //Ejercicio 18.11
	
	string nombre = "Fabian";
	string apellido = "Concha";
	unir(nombre, apellido);
	
	
}
