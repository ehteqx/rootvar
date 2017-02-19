// ROOT 6 using C++11
// This macro is an exercise about pointers, with no other practical purpose

#include "Riostream.h"
using namespace std;

void pointerstest() {

	// DEFINITIONS
	int x=2,y=8;
	int *p=&x,*q=&y;

	// EXPLANATORY NOTE:
	// A simple way to conceive pointers is the one that follows.
	// "*" means "what's written in memory address"
	// "&" means "the memory address of"
	// When declaring pointers, the variable type must be the same of the variable referenced AND each pointer
	// must be preceded by the operator "*" (dereference operator).

	// PRINTOUT
	cout << "Value of x: " << x << endl;
	cout << "Value of x, through dereference of pointer (value of *p): " << *p << endl;
	cout << "Address of x, through operator: " << &x << endl;
	cout << "Address of x, through value of pointer (value of p): " << p << endl;
	cout << " " << endl; // White line
	cout << "Value of y: " << y << endl;
	cout << "Value of y, through dereference of pointer (value of *q): " << *q << endl;
	cout << "Address of y, through operator: " << &y << endl;
	cout << "Address of y, through value of pointer (value of q): " << q << endl;
	cout << " " << endl; // White line
	cout << "Address of p: " << &p << endl;
	cout << "Address of q: " << &q << endl;
}
