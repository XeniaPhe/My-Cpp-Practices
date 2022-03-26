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
#include <cstddef>

void printByValue(std::string val) // The function parameter is a copy of str
{
	std::cout << val << std::endl; // print the value via the copy
}

void printByReference(const std::string& ref) // The function parameter is a reference that binds to str
{
	std::cout << ref << std::endl; // print the value via the reference
}

void printByAddress(const std::string* ptr) // The function parameter is a pointer that holds the address of str
{
	std::cout << *ptr << std::endl; // print the value via the dereferenced pointer
}

void nullify(int*& refptr)		//lvalue reference to a void pointer (vice versa isn't possible since references aren't actual objects)
{
	refptr = nullptr;
}

void nullify(int** dblptr)		//I guess I should leave this with C and move on
{
	*dblptr = nullptr;
}

void isNull(void* ptr)
{
	//std::cout << ptr ? "Non-null\n" : "Null\n"; => don't forget operator precedence
	std::cout << (ptr ? "Non-null\n" : "Null\n");
}


void onlyNullptr(std::nullptr_t null)	//nullptr is of type nullptr_t which is defined in the cstddef header file and nullptr_t can only have value nullptr!!
{
	
}

/*
											SOME REALIZATION
 If they can’t be optimized away entirely, references are normally implemented by the compiler using pointers. 
 This means that behind the scenes, pass by reference is essentially just a pass by address 
 (with access to the reference doing an implicit dereference).

 And pass by address just copies an address from the caller to the called function which is just passing an address by value.
  
 Therefore, we can conclude that C++ really actually passes everything by value! The properties of pass by address (and reference) come 
 solely from the fact that we can dereference the passed address to change the argument, which we can not do with a normal value parameter!
 
 https://www.learncpp.com/cpp-tutorial/pass-by-address-part-2/
 */


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
	
	int test1 = 72;
	int* test1ptr = &test1;
	int test2 = 27;
	int* test2ptr = &test2;
	
	isNull(test1ptr);
	nullify(test1ptr);
	isNull(test1ptr);
	
	isNull(test2ptr);
	nullify(&test2ptr);
	isNull(test2ptr);
	
	return 0;
}

