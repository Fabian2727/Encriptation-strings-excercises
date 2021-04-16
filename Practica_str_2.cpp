# include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(){
	
	string cadena = "1525";
	cout<<"Su variable tipo cadena es: "<<cadena<<endl;
	cout<<"Demostración: Concatenacion de strings 1525+hola"<<endl;;
	cout<<"Demostración: Concatenacion de strings 1525+hola"<<endl;;
	string cad1 = cadena + "hola";
	cout<<cad1<<endl;
	
	int nro = atoi(cadena.c_str());
	cout<<"Su variable tipo entero es: "<<nro<<endl;
	int x = nro + 25;
	cout<<"Demostración: Suma de enteros 1525+25";
	cout<<x<<endl;
	
	
}
