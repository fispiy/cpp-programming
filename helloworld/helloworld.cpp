// this is my first working CPP program

#include <iostream> // header file where we work with input and output, what is a header?
#include "newfunc.h"
using namespace std; // we can use objects and variables from this library 


/* 
This would be a function docstring comment
Very big and large
*/


string myName = "John";
int myAge; 
int eighteen = 18;
bool myBool = false;
int studentID = 15;
int studentAge = 23;
auto studentName = 'Bob';
float studentFee = 75;
char studentGrade = 'B';



int main() {
	/*
	This is my first function
	It takes in your age, it will compare with the integer 18
	It also says hello world, and whatever your age 
	*/
	cout << "Whats your age";
	cin >> myAge;
	cout << "Hello World" << endl;
	cout << "My name is " + myName << endl;
	cout << "My age is " << myAge << " years old" << endl;
	cout << (eighteen > myAge) << endl;
	cout << (eighteen < myAge) << endl;
	cout << "Student ID " << studentAge << "\n";
	check_age(eighteen, myAge);
	return 0;
}