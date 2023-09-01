#include<iostream>
using namespace std;

class A
{
	public:
		int id;
		string name;
		string address;
		int age;
		string comp_name;
		double salary;
		double phone_num;
};

class B : public A
{
	public:
		void set1()
		{
			cout << "Enter Id :- " ;
			cin >> id ;
			cout << "Enter Name :- " ;
			cin >> name ;
			cout << "Enter Adress :- " ;
			cin >> address ;
			cout << "Enter Age :- " ;
			cin >> age ;
		}
};

class C : public A 
{
	public:
		void set2()
		{
			cout << "Enter Company's name :- " ;
			cin >> comp_name ;
			cout << "Enter Salary :- " ;
			cin >> salary ;
			cout << "Enter Phone number :- " ;
			cin >> phone_num ;
		}
};

class D : public C , public B
{
	public:
		void get()
		{
			cout << endl << "Id :- " << B::id << endl ;
			cout << "Name :- " << B::name << endl ;
			cout << "Adress :- " << B::address << endl ;
			cout << "Age :- " << B::age << endl ;
			cout << "Company's name :- " << C::comp_name << endl ;
			cout << "Salary :- " << C::salary << endl ;
			cout << "Phone number :- " << C::phone_num << endl ;	
		}
};

int main()
{
	
	D obj;
	
	obj.B::set1();
	obj.C::set2();
	obj.get();
	
	return 0;
}
