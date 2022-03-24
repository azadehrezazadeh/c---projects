#include <iostream>
using namespace std;
/*
find max of 3 number
*/
int main() {

int max=0,x;	

for ( int i=1 ; i<= 3 ;i ++ )
{
	cin >> x ;
	
	if ( x > max)
	   max = x;
	   
	   
}

cout << "max : "<< max;

  return 0;
}