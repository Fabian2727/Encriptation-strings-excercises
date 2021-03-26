# include <iostream>
//# include <stdlib.h>
using namespace std;

string mensaje="Hola_como_estas?";


class decifrado{
	
	private:
		
		char matriz[3][6];
	
	public:
		
		void llenar(string oracion)
		{
			int k=0;
			for(int i = 0; i<3 ;i++)
			{
				for(int j = 0; j<6 ;j++)
				{
					matriz[i][j] = oracion[k];
					k++;
					if (k> oracion.size()) {matriz[i][j]='\t';}
				}
			}
		}
	
		void mostrar()
		{
			for (int i=0;i<3;i++)
			{
				for (int j=0;j<6;j++)
				{
					cout<<matriz[i][j]<<"\t";
				}
					cout<<"\n";
			}
		}
		
		void cifrar ()
		{
			for (int i=0;i<6;i++)
			{
				for (int j=0;j<3;j++)
				{
					cout<<matriz[j][i];
				}
			}
			cout<<"\n";
		}
		
		void decifrar()
		{
			for (int i=0;i<3;i++)
			{
				for (int j=0;j<6;j++)
				{
					cout<<matriz[i][j];
				}
			}
			cout<<"\n";
		}
};

int main(){
	
	decifrado texto;
	
	cout<<"Mensaje original: "<<mensaje<<endl;
	texto.llenar(mensaje);
	texto.mostrar();
	cout<<"============================="<<endl;
	cout<<"Mensaje cifrado: "<<endl;
	texto.cifrar();
	cout<<"============================="<<endl;
	cout<<"Mensaje decifrado: "<<endl;
	texto.decifrar();

}
