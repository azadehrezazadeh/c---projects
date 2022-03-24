#include <iostream>
using namespace std;
/*
calculate average of input numbers
*/
int main() {	

int exit_num = -1 , x,n=0 ;
float sum = 0 , average=0;

cin >>x;

while (x != exit_num)
{
	sum+=x;
	n++;
	cin >>x;
}

if (n>0)
	average= sum/n;

cout <<"sum =" << sum<<endl;
cout <<"average = "<<average;


  return 0;
}