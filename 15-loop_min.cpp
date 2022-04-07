#include <iostream>

using namespace std;

int main ()
{
	int x,min;
	
	cin >>x;
	
	min=x;
	
	for (int i=1;i<5;i++)
	{
		cin >>x;
		
		if (x<min)
		 min=x;
	}
	
	cout <<"minimum is :" <<min;
	
	return 0;
}