# include <iostream>
#include <string>
//# include <stdlib.h>
using namespace std;

int main()
{
	string palabra = "Fabian";
	string::const_iterator iterador1 = palabra.end();

	while ( iterador1 != palabra.begin()-1 )
	{
	cout << *iterador1;
	iterador1--;
	}
}
