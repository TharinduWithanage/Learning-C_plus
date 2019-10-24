#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fname;
	string lname;
	string fullname;
	cout<<"Enter your first name ";
	cin>> fname;
	cout<<"Enter your last name ";
	cin>> lname;
	fullname=fname+" "+lname;
	cout<< "Your full name is "<<fullname;
	
	return 0;
}
