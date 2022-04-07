#include <iostream>

using namespace std;

int main ()
{
	int a,b,c,max;
	int z1,z2;
	
	cin >>a>>b>>c;
	if (a>b && a>c)
	{
		max=a;
		z1=b;
		z2=c;
	}
	else if(b>a && b>c)
	{
		max=b;
		z1=a;
		z2=c;
	}
	else if (c>a && c>b)
	{
		max=c;
		z1=a;
		z2=b;
	}
	
	
	cout <<"hypotenus is :" <<max <<" z1: "<<z1 <<" z2: "<<z2<<endl;
	
	if (max*max == (z1*z1 + z2*z2))
		cout <<"right triangle";
	else
		cout <<"no!";
		
	return 0;
}