/* 
 * File:   main.cpp
 * Author: xenia
 *
 * Created on March 26, 2022, 4:05 PM
 */

/*
 Important notes to remember :
 
	1 => References must be initialized, pointers are not required to be initialized (but should be).
	2 => References are not objects, pointers are.
	3 => References can not be reseated (changed to reference something else), pointers can change what they are pointing at.
	4 => References must always point at an object, pointers can point to nothing (we’ll see an example of this in the next lesson).
 
 */


#include <iostream>
#include <string>

void printLine(const std::string& str)	//Lvalue references are used to pass objects (mostly classes)
{
	std::cout<<str<<std::endl;
}


int main(int argc, char** argv)
{
	int x = 5;
	double y = 3.14;
	int& ref {x};		//Created an lvalue reference to the lvalue x,we say ref is bound to variable x
	double& ref1 = y;
	
	
	//We can use these references to access to their bound object's value or modify it,however the reference itself is not an object
	
	//int& invalidRef1; => references must be initialized
	
	//int& invalidRef2{5}; => references can't be bound to rvalues since rvalues are immediate values
	
	const char A = 'A';
	//char& invalidRef3 = A; => lvalue reference can't reference a const object
	
	const char& constRef = A;	//However a const lvalue reference can reference a const object and can be used to access to its value but can't modify it
	
	bool isGrounded=false;
	const bool& constRef1 = isGrounded;		//const lvalue references can also reference modifiable (non-const)objects 
	
	const float& constRef2 = 6;		//const lvalue references can also be given an rvalue and it will create a temporary object
	
	return 0;
}

