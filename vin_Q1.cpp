#include<iostream>
using namespace std;

int main()
{
	
	int a;

	cout << endl << "Enter your age to apply for driving licence :- " ;
	cin >> a ;
	
	try
	{
		if(a < 18)
		{
			throw a ;
		}
		cout << endl << "You are elegiable to apply for driving licence...." ;
	}
	
	catch(...)
	{
		cout << endl << "You are not elegiable to apply for driving licence...." ;
	}
	
	return 0;
}
