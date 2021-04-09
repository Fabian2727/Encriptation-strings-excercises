# include <iostream>
//# include <stdlib.h>
using namespace std;


void div (int a,int n)
{
	//a = q*n + r
	int q, r;
	
	if (n<0 )
	{
		q = a / n;
		r = a -(a / n) * n;
	}
	else
	{
		q = (a / n)- 1;
		r = a - (q * n);
	}

	cout<<"r: "<<r<<endl;
	cout<<"q: "<<q<<endl;
}

int main()
{
	div(-255,11);
}
