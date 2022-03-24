#include <iostream>
using namespace std;

/*
nested if
*/
int main()
{

 
 int age ;
 cin >>age;
 
 if (age >=14)
 {
 	
 	 if (age <=18)
 	 {
 	 	cout << "teenager";
	  }
	  else
	  {
	  	cout << "older than 18";
	  }
 
 }
 else
 {
 	
 	
 	 if (age <=7)
 	 {
 	 	cout << "child";
	  }
	  else
	  {
	  	cout << "between child and teenager";
	  }
 	
 }
return 0;
}