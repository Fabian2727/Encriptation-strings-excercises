# include <iostream>
//# include <stdlib.h>
using namespace std;

string mensaje = "Hola_como_estas?"; //[3][6]
//string mensaje = "To decrypt, all one must do is wrap the leather strip around the rod and read across"; //[8][9]
//string mensaje="and so discovers the continuity of the message. And the parchment"; //[9][9]

class escitala{
	
	private:
		
		//Clave
		int cF=3;
		int cC=6;
		
	
	public:
		
		int index = 0;  //variables que ayudarán a recorrer el string
    	int cont = 0;
    	
    string nuevo = mensaje; //creamos un nuevo string que será para la oración cifrada, igualanándolos para que tengan la misma longitud
		
	string cifrar(string oracion)
	{
	    for (int i = 0;i < cC;i++)
	    {
	    	for (int j = 0;j < cF;j++)
	        {
	          nuevo[j + cont] = oracion[i + index];   //Se comparan ambos strings y se empieza a encriptar
	          index = index + cC;					 //Se recorre cada 6 espacios en el mensaje original, y si coloca ese caracter en el string encriptado
	        }
	        cont = cont + cF;
	        index = 0;
	    }
	    return nuevo;
	}
	
//=============================================================================

	string decif = nuevo;   //Se crea un nuevo string, que será el mensaje desenciptado
	
	string decifrar()    //Trabajaremos con el string encriptado anteriormente, por lo que esta función no necesita parámetros
	{
		for (int i = 0;i < cF;i++) 		//La forma de recorrer los strings se invierte, por lo que cC se reemplaza por cF y viceversa
	    {
	    	for (int j = 0;j < cC;j++)
	    	{
	        	nuevo[j+cont] = decif[i+index];   //Del mismo modo, ahora la comparación no es a=b, sino b=a
	        	index = index+cF;
	    	}
	    	cont = cont + cC;
	    	index = 0;
	    }
    	return decif;
    }	
};

int main(){
	
	escitala texto; //Instanciar un objeto

	string cif = texto.cifrar(mensaje);
	string decif = texto.decif;
	
	cout<<cif<<endl;  //Imprimimos los strings retornados por las funciones
	cout<<decif<<endl;

}
