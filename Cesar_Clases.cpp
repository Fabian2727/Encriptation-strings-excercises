# include <iostream>
#include <string>
# include <stdlib.h>
using namespace std;

class cesar
{
	private:
		int clave = 12;
	public:
		string alf = "abcdefghijklmnopqrstuvwxyz";
		int valor;
		int tam = alf.size();
	
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
		string nuevo = a;
	
		for (int i=0; i<a.length(); i++)
		{
			valor = alf.find(a[i]);
		
			if (a[i] == ' ')
				{
					nuevo[i] = ' ';
				}
    		valor = valor + clave;
			if (valor != string::npos)
			{
				if (valor >= tam)
				{
					valor = mod((valor),tam);
					nuevo[i] = alf[valor];
				}
				else
				{
					nuevo[i] = alf[valor];
				}
			}
			valor = 0;
		} 
		return nuevo;
	}
	
	string descifrado (string a)
	{
		for( int i = 0; i < a.length(); i++)
    	{
    		valor = alf.find(a[i]);
    		if (a[i] == ' ')
			{
				a[i] = ' ';
			}
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
};

class fuerza
{
	public:
		string alf = "abcdefghijklmnopqrstuvwxyz";
		int tam = alf.size();
		int valor = 0;
		string nuevo;
		
	string descifradoFB (string a)
	{
		nuevo = a;
		
		for (int clave = 1; clave < tam; clave++)
		{
			a = nuevo; 
			
			for( int i = 0; i < a.length(); i++)
		    {
		    	valor = alf.find(a[i]);
		    	if (a[i] == ' ')
				{
					a[i] = ' ';
				}
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
		    cout<<"Decifrado con clave "<<clave<<": "<<endl;
		    cout<< a<<endl;
		}
	}
			
};


int main(){
	
	string frase = "pruebadecifradoconclavedoce"; 
	string frase2 = "ourdmpaoqemdoazpaoq";
	
	char opc;
	
	cout<<"Elija a o b segun la funcion que quiere ejecutar: "<<endl<<"a. cifrado y decifrado Cesar."<<endl<<"b. descifrado a fuerza bruta"<<endl;
	cin>>opc;
	cout<<endl;
	
	if (opc == 'a' || opc == 'A')
	{
		string cif, decif;
		
		cesar cambio;
		cesar arreglo;
		
		cif = cambio.cifrado(frase);
		decif = arreglo.descifrado(cif);
		
		cout<<"String Original :"<<frase<<endl;
		cout<<"Cifrado: "<<cif<<endl;
		cout<<"Decifrado: "<<decif<<endl;
	}
	
	else if (opc == 'b' || opc == 'B')
	{
		string bruto;
		fuerza forzado;
		bruto = forzado.descifradoFB(frase2);
		
		cout<<"String Cifrado: "<<frase2<<endl;
		cout<<"Decifrado a la fuerza: "<<endl;
		cout<<bruto<<endl;
	}
	
	else
	{
		cout<<"No eligio ninguna de la opciones inidcadas, reinicie el programa."<<endl;
	}
	
}
