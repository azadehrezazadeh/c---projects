#include <iostream>
using namespace std;

//----------------- c++ programming course : session 4  -----------------------------

int main()
{

	//----------- Comments -------------------------------

	// comment line 1
	// comment line 2
	/*
	comment
	multi
	line
	*/
	
	//----------- format cout with escape charactes ----
	cout << "\\****\t \" Hello all C++ developers \" \t****\\ \n"<<endl;
	cout<<"----------------------------------"<<"\n\n\n\n";
	
	//-----------Data Type Samples--------------------------	
	int num_1 =12;
	float num_2 = 1.2;
	double num_3 =2e5;  // 2*10^5
	char ch='a';
	string str=" sample string";
	bool sw= false;
	
	cout << "Data Type Samples \n ----------------------------------\n";
	cout << "int    |  num_1 = "<<num_1<<"\n ----------------------------------\n";
	cout << "float  |  num_2 = "<<num_2<<"\n ----------------------------------\n";
	cout << "double |  num_3 = "<<num_3<<"\n ----------------------------------\n";
	cout << "char   |  ch    = "<<ch<<"\n ----------------------------------\n";
	cout << "string |  str   = "<<str<<"\n ----------------------------------\n";
	cout << "bool   |  sw    = "<<sw<<"\n ----------------------------------\n"<<"\n\n\n\n";
	

	//------------ sum of two integer numbers --------------

	cout <<"please enter two numbers : ";
	int a,b,sum;
	cin >> a >> b ;		
	cout << "a =" <<a << "\t" << "b =" <<b <<endl;		
	sum= a+b ;
	cout << "sum =" << sum;

	return 0;	
}