# include <iostream>
#include <string>
# include <stdlib.h>
using namespace std;

	void separar (string a[], int size, int n)
	{
		for (int i = 0; i< n; i++)
		{
			cout<<a[i];
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
