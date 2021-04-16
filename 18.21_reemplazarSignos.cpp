# include <iostream>
#include <string>
#include <cstring>
//# include <stdlib.h>
using namespace std;

int main(){
	
	char a[] = "Hola, mi nombre es Fabian. Un gusto conocerte";
	int tam = 11;
	
	for (int i=0; i<tam; i++)
	{
		if (a[i]==',' || a[i]=='.' || a[i]==':' || a[i]==';')
		{
			a[i] = ' ';
		}
	}
	cout<<a<<endl;
	
	cout<<"==============================="<<endl;
	cout<<"Separacion por tokens: "<<endl;
	char *ptr;
	
	ptr = strtok(a, " ");
	
	while (ptr != NULL)
	{
		cout<<ptr<<endl;
		ptr = strtok(NULL, " ");
	}
}
