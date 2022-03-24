#include <iostream>
using namespace std;
/*
condition : switch case 
*/
int main()
{

char day;

 cin >> day;
 
 switch (day)
{
	
	case 's': 
	cout << "saturday";
	break;
	
	case 'n': 
	cout << "sunday";
	break;

	default :
			cout << "invalid number";
	 }

return 0;
}