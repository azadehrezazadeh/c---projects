#include <iostream>

using namespace std;

int main ()
{
	for (int i=0;i<5 ;i++)
	{
	
		for(int j=0;j<4;j++)
			{
				for(int k=0;k<3;k++)
					cout<<"*";
				cout<< endl;
			}
		cout<< endl;
	}
	
	return 0;
}