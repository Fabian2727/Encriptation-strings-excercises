# include <iostream>
#include <string>
//# include <stdlib.h>
using namespace std;

void mostrar (string a[],int size)
{
	for (int i=0; i<size; i++)
	{
		cout<<a[i]+" ";
	}
	cout<<endl;
}

int main(){
	
	string lista []= {"Rodrigo","Fabian","Daniela","Jose","Ana"};
	int tam = 5;
	cout<<"Lista original: ";
	mostrar(lista,tam);
	
	for (int i=0; i<=tam-1; i++)
	{
		for (int j=0; j<=tam-1; j++)
		{
			(lista[i].compare(lista[j]));
			
			if (lista[i]<lista[j])
			{
				lista[i].swap(lista[j]);
			}
		}
	}
	cout<<"Lista Ordenada: ";
	mostrar(lista,tam);
	
}
