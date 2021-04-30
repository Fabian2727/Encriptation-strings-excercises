# include <iostream>
#include <string>
# include <stdlib.h>
using namespace std;

class afin{
	
	private:
		
		int a,b;
		string alf = "abcdefghijklmnopqrstuvwxyz";
		int tam = alf.size();
		
	public:
		
		int modulor (int a,int n)
		{
			//a = q*n + r  //0 =< r < n  
			int q, r;
			q = a / n;
			r = a - (q * n);
			
			if (r<0 && n>0)
			{
				q = q-1;
				r = a -(q * n);
			}
			else
			{
				//q = a / n;
				r = a - (q * n);
			}
			return r;
		}
		int moduloq (int a,int n)
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
			return q;
		}
		int generador_a()
		{
			int clavea,c;
			clavea = rand()%tam;
			
			while (c != 1)
			{
				c = euclides(clavea,tam);
			}
			if (clavea == 0)
			{
				generador_a();
			}
			//cout<<"Clave a: "<<clavea<<endl;
			return clavea;
		}
		int generador_b()
		{
		int claveb= rand()%tam;
		if (claveb <= 0)
		{
			generador_b();
		}
		//cout<<"Clave b: "<<claveb<<endl;
		return claveb;
	}	
		int inversa(int a)
		{
			int inv = euclidesext(a, tam);
			if (inv < 0)
			{
				inv = modulor(inv, tam);
			}
			return inv;
		}
		int euclides (int x, int y)
		{
			int q = moduloq(x,y);
			int r = modulor(x,y);
			
			while (r!=0)
			{
				x = y;
				y = r;
				q = moduloq(x,y);
				r = modulor(x,y);
				x = q*y + r;
				//cout<< x <<"="<< q <<"*"<< y <<"+"<< r <<endl;
			}
			return y;
		}
		int euclidesext(int a, int b)
		{
			//d = a*x + b*y;
			int r1 = a;
			int r2 = b;
			int s1 = 1;
			int s2 = 0;
			int t1 = 0;
			int t2 = 1;
			int d = euclides(a,b);
			int r;
			int s;
			int t;
			
			while (r2>0)
			{
				int q = r1 / r2;
				r = r1 - (q*r2);
				r1 = r2;
				r2 = r;
				
				s = s1 - (q*s2);
				s1 = s2;
				s2 = s;
				
				t = t1 - (q*t2);
				t1 = t2;
				t2 = t;
				//cout<<d<<"="<<a<<"*"<<s1<<"+"<<b<<"*"<<t1<<endl;
			}
			return s1;	
		}
		
		//Constructor:
		afin() //Emisor
		{
			a = generador_a();
			b = generador_b();
		}		
		afin(int m, int n) //Receptor
		{
			a = m;
			b = n;
		}
		
		//Funciones get y set de a y b
		int get_a()
		{
			return a;
		}
		int get_b()
		{
			return b;
		}
		void set_a(int val1)
		{
			a = val1;
		}
		void set_b(int val2)
		{
			b = val2;
		}
		//Funciones Cifrado y Descifrado
		string afin_cif(string msj)
		{
			int valor; //Ubicacion de la letra en el alfabeto
			string nuevo = msj; //String que almacena el cifrado
			
			for (int i=0; i<msj.size(); i++)
			{
				valor = alf.find(msj[i]);
		
		    	if (valor != string::npos)
				{
					valor = (valor*a)+b;
					
					if (valor>=tam)
					{
						valor = modulor((valor),tam);
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
		string afin_dec(string msj)
		{
			int inv = inversa(a);
			int valor; //Ubicacion de la letra en el alfabeto
			string nuevo = msj; //String que almacena el descifrado
			
			for (int i=0; i<msj.size(); i++)
			{
				valor = alf.find(msj[i]);
		
		    	if (valor != string::npos)
				{
					valor = (valor-b)*inv ;
					valor = modulor((valor),tam);
					
					if (valor>=tam)
					{
						valor = modulor((valor),tam);
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
				
};

int main(){
	
	string mcif = "wolfpack";
	string mdec = "zjqeyhlb";
	
	afin emi;
	
	//Alterar valores de a y b
	emi.set_a(17);
	emi.set_b(12);
	
	afin rec(emi.get_a(), emi.get_b());
	
	//Cifrado y descifrado
	string cifrado = emi.afin_cif(mcif);
	string descifrado = rec.afin_dec(cifrado);
	
	//Muestra de resultados
	cout<<"Mensaje cifrado: "<< cifrado <<endl;
	cout<<"Mensaje descifrado: "<< descifrado <<endl;
	cout<<"Clave a: "<<emi.get_a()<<endl;
	cout<<"Clave b: "<<emi.get_b()<<endl;
	cout<<"Inversa de a: "<<emi.inversa(emi.get_a())<<" Valor original de a: "<<emi.get_a()<<endl;;
}
