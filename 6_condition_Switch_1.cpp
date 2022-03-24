#include <iostream>
using namespace std;
/*
condition :Switch case
*/
int main()
{

int day;

 cin >> day;
 
 switch (day)
{
	
	case 1: 
	cout << "sat";
	break;
	
	case 2: 
	cout << "sun";
	break;
	
	
	case 3: 
	cout << "mon";
	break;
	
	
	case 4: 
	cout << "tue";
	break;
	
	case 5: 
	cout << "wed";
	break;
	
	case 6: 
	cout << "thu";
	break;
	
	
	case 7: 
	cout << "fri";
	break;
	
	default :
			cout << "invalid number";
	
 }

}