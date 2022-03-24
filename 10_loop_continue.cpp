#include <iostream>
using namespace std;

/*
"continue" in Loops
*/

int main() {	

//------------------------------
int x= 0;

while (x<10)
{
	x++;
	if (x==5)
      continue;	 
	 
	cout << x <<' ';
}

	cout <<endl;
//--------------------------

for (int y=1 ;y <=10 ;y++ )
{
	if (y==5)
	 continue;
	 
	cout <<y<< ' ';
}
  return 0;
}