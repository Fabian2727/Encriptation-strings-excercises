# include <iostream>
#include <string>
# include <stdlib.h>
using namespace std;

	void separar (string a[], int size, int n)
	{
		for (int i = 0; i< size; i++)
		{
			for (int j=0; j<n; j++)
			{	
				if (a[i][j].lenght() < n)
				{
					int rest = n - a[i][j].lenght();
					for (int k = 0; k<res; k++)
					{
						a[i][j] = a[i][j] + "X";
					}
				}
				else
				{
					cout<<a[i][j];
				}
			}
			cout<<endl;
		}
	}
	
	void juntar (string a[], int size, int n)
	{
		for (int i = 0; i< size; i++)
		{
			for (int j=0; j<n; j++)
			{	
				if (a[i][j].lenght() < n)
				{
					int rest = n - a[i][j].lenght();
					for (int k = 0; k<res; k++)
					{
						a[i][j] = a[i][j] + "X";
					}
				}
				else
				{
					cout<<a[i][j];
				}
			}
			cout<<'*';
		}
	}
	
	void mostrar (string a[],int size)
	{
		for (int i=0; i<size; i++)
		{
			cout<<a[i]+" ";
		}
		cout<<endl;
	}

int main(){
	
	int clave = 4;
	string frase[100];
	cout<<"Ingrese la frase: ";
	cin>> frase[100];
	cout<<endl;
	
	int size = 100;
	
	separar (frase,size,clave);
	
}
