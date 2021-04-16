# include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(){
	
	int nro = 1200;
	cout<<"Su variable tipo entero es: "<<nro<<endl;
	cout<<"Demostración:  Suma de enteros 1200+25"<<endl;;
	int n = nro + 25;
	cout<<n<<endl;
	
	string cad []=" ";
	cad[] = to_string(nro);
	cout<<"Su variable tipo string es: "<<cad<<endl;
	string cad1 = cad + " Es una cadena";
	cout<<"Demostración: Concatenacion de cadenas";
	cout<<cad1<<endl;
	
	
}
