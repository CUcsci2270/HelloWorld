//November 5th pointers
#include <iostream>
using namespace std;

int main()
{
	int x;
	int *p;
	
	cout << "&p = " << &p << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "&x = " << &x << endl;
	cout << "x = " << x << endl;
	
	p = &x;
	cout << "&p = " << &p << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "&x = " << &x << endl;
	cout << "x = " << x << endl;
	
	*p = 38;
	cout << "&p = " << &p << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "&x = " << &x << endl;
	cout << "x = " << x << endl;
}
