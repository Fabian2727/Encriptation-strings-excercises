# include <iostream>
//# include <stdlib.h>
using namespace std;

string mensaje = "Hola_como_estas";

class rail{
	
	private: //Clave
		int cF = 3;
		int cC = mensaje.length();
		
	public:
		int index = 0;  //variables que ayudarán a recorrer el string
    	int cont = 0;
    	int avance = (cF*2)-2;
    	int saltos = 0;
    	
    string nuevo = mensaje; //creamos un nuevo string que será para la oración cifrada, igualanándolos para que tengan la misma longitud
		
	string cifrar(string oracion)
	{                       
	    for (int i = 0;i < cC;i++)
	    {
	    	for (int j = 0;j < cF;j++)
	        {
	          	if (saltos % 2 == 0)
	          	{
					nuevo[j + cont] = oracion[i + index];   //Condiciones para realizar el recorrido diagonal de arriba a abajo y viceversa
	          		index = index + avance;
				}
				else
				{
					nuevo[j + cont] = oracion[i + index];   
	          		index = index + avance;
				}
			}
	        cont = cont + cF;
	        index = 0;
	    	saltos ++;
		}
	    return nuevo;
	}
};


int main(){
	
	rail texto; //Instanciar un objeto

	string cif = texto.cifrar(mensaje);
	//string decif = texto.decif;
	
	cout<<cif<<endl;  //Imprimimos los strings retornados por las funciones

	
}
