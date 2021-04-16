# include <iostream>
#include <string>
# include <stdlib.h>
using namespace std;

int elegir (string a[], int size)
{
	int nro = rand()%size;
}

void secreto (string x, int n)
{
	cout<<"Adivine la palabra: ";
	for (int i=0; i<n; i++)
	{
		x[i] = 'X';
	}
}
void figura (int n)
{
	char cabeza = 'O';
	char cuerpo1 = '|';
	char cuerpo2 = '|';
	char brazo1 = '/';
	char brazo2 = '\ ';
	char pierna1 = '/';
	char pierna2 = '\ ';
	
	switch(n)
	{
		case 1 : cout<<cabeza<<endl;
		case 2 : cout<<brazo1;
		case 3 : cout<<cuerpo1;
		case 4 : cout<<brazo2<<endl;
		case 5 : cout<<cuerpo2<<endl;
		case 6 : cout<<pierna1;
		case 7 : cout<<pierna2<<endl;
	}
}

int main(){
	
	string palabras[] = {"jarra","hola","prueba","adivina","mouse","lentes","calculadora","monitor","lapiz","regla"};
	int tam = 10; //Cantidad de palabras para elgir en el random
	int num = elegir(palabras,tam); //El nro de la palabra elegida
	string cifrado; //String que se llenará con X
	secreto(cifrado,num); //Codificacion de la palabra con X
	
	char letra;
	int fallos=0;
	bool seguir = true;
	while (seguir)
	{
		if (seguir == true)
		{
			cout<<"Ingresa la letra que desees: ";
			cin>>letra;
			cout<<endl;
		}
		seguir = false;
		for (int i=0; i<tam; i++)
		{
			if (letra==palabras[num][i])
			{
				cout<<"Acertaste, felicitaciones"<<endl;
				cifrado[i] = letra;
			}
			else
			{
				fallos++;
				cout<<"Fallaste, "<<6-fallos<<" restantes."<<endl;
				figura (fallos);
			}
			seguir = true;
		}
		
		if (fallos == 7)
		{
			cout<<"Perdiste! La palabra era: "<<palabras[num]<<endl;
			break;
		}
	}
	
	
		
	
}
