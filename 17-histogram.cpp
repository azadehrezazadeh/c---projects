#include <iostream>

using namespace std;

int main ()
{
	int x;
	
	for (int i=0;i<5;i++)
	{
		cin >>x;
		if (x>=1 && x<=30)
		{
			for(int j=0; j<x ;j++)
				cout <<"*";
			
			cout <<endl;
				
		}	
	}
	
	return 0;
}