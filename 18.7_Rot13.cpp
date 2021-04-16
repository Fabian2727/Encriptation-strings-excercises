# include <iostream>
#include <string>
# include <stdlib.h>
using namespace std;

int mod (int a,int n)
{
	//a = q*n + r  //0 =< r < n  
	int q, r;
	
	if (r<0)
	{
		q = q-1;
		r = a -(a / n) * n;
	}
	else
	{
		q = a / n;
		r = a - (q * n);
	}
	return r;
}

string cifrado (string a)
{
	//string alf = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","ñ","o","p","q","r","s","t","u","v","w","x","y","z"};
	string alf = "abcdefghijklmnñopqrstuvwxyz";
	int tam = 26;
	int clave = 13;
	int valor;
	
	for (int i=0; i<a.length(); i++)
	{
		valor = alf.find(a[i]);
		if (valor != string::npos)
		{
			valor = valor + clave;
			if (i+clave>=tam)
			{
				valor = mod((i+clave),26);
				a[i] = alf[valor];
			}
			else
			{
				a[i] = alf[valor];
			}
		}
		valor = 0;
	} 
	return a;
}

string decifrado (string a)
{
	string alf = "abcdefghijklmnñopqrstuvwxyz";
	int tam = 26;
	int clave = 13;
	int valor;
	
	for( int i = 0; i<a.length(); i++)
    {
      valor = alf.find(a[i]);
      
      if (valor != string::npos)
      {
        valor = valor - clave;
        if (valor < 0)
        {
          valor = valor + tam;
          a[i] = alf[valor];
        }
        else
        {
          a[i] = alf[valor];
        } 
      }
      valor = 0;
    }
      
  return a;
}

int main(){
	
	string palabra1 = "fabian";
	string cif = cifrado(palabra1);
	string palabra2 = "rnñurz";
	string dec = decifrado(palabra2);
	cout<<cif<<endl;
	cout<<dec<<endl;
}
