#include <iostream>
using namespace std;
/*
sum of input numbers
*/
int main() {	

int exit_num = -1 , sum = 0 , x;

cout <<"exit number is "<< exit_num << " then ENTER \n";

cin >>x;

while (x != exit_num)
{
	sum+=x;
	cin >>x;

}

cout <<"sum =" << sum;


  return 0;
}