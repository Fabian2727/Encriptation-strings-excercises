# include <iostream>
//# include <stdlib.h>
using namespace std;

//string mensaje = "Hola_como_estas?"; //[3][6]
//string mensaje = "To decrypt, all one must do is wrap the leather strip around the rod and read across"; //[8][9]
string mensaje="and so discovers the continuity of the message. And the parchment"; //[9][9]

class decifrado{
	
	private:
		
		//Clave
		int cF=8;
		int cC=9;
		
	
	public:
		
		string cifrarYdecifrar(string oracion)
		{
			char matriz[cF][cC];
			int k=0;
			//Llenar
			for(int i = 0; i<cF ;i++)
			{
				for(int j = 0; j<cC ;j++)
				{
					matriz[i][j] = oracion[k];
					k++;
					if (k> oracion.size()) {matriz[i][j]='\t';}
				}
			}
			//Mostrar
			for (int i=0;i<cF;i++)
			{
				for (int j=0;j<cC;j++)
				{
					cout<<matriz[i][j]<<"\t";
				}
					cout<<"\n";
			}
			
			cout<<"========================"<<endl;
			cout<<"Mensaje cifrado: "<<endl;
			//Cifrar
			for (int i=0;i<cC;i++)
			{
				for (int j=0;j<cF;j++)
				{
					cout<<matriz[j][i];
				}
			}
			cout<<"\n";
			
			cout<<"========================"<<endl;
			cout<<"Mensaje decifrado: "<<endl;
			//Decifrar
			for (int i=0;i<cF;i++)
			{
				for (int j=0;j<cC;j++)
				{
					cout<<matriz[i][j];
				}
			}
			cout<<"\n";
			return oracion;
				
		}
		
};

int main(){
	
	decifrado texto; //Instanciar un objeto
	
	cout<<"Mensaje original: "<<mensaje<<endl;
	cout<<"========================"<<endl;
	texto.cifrarYdecifrar(mensaje);

}
