// this is my first working CPP program

#include <iostream> // header file where we work with input and output, what is a header?
#include "firstprogram.h"
#include "operations.h"
using namespace std; // we can use objects and variables from this library 


/* 
This would be a function docstring comment
Very big and large
*/


int main() {
	cout << multiply(3, 4) << endl;
	cout << sum_up_to(5);
	return 0;
}