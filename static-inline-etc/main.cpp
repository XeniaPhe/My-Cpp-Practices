
/* 
 * File:   main.cpp
 * Author: xenia
 *
 * Created on March 23, 2022, 12:04 AM
 */

#include <iostream>
#include "mathConstants.h"

using namespace std;	//using directive will load all the members of the namespace into the scope it's called.So you don't have to use scope resolution operator with the namesapce

namespace	//everything inside an anonymous namespace is treated as a global member in the file it's declared so they can't be used outside the file	
{
	int a;
	int b;	//These are like global variables but you can not use them in another file
	
	static void printLine(std::string str)	//use static keyword for the same functionality for the functions
	{
		cout<<str<<'\n';	//Because we used using directive for std namespace we don't need to resolve it via ::
	}
	
	static void printF(float f)
	{
		cout<<f<<'\n';
	}
	
	static void printD(long long l)
	{
		cout<<l<<'\n';
	}
}

inline namespace v1		
{
	/*
	 *	If two or more functions with same prototypes in different namespaces one of which is an inline namespace,
	 * you can call them globally and the one in the inline namespace will be called,that's useful when the programmer wants
	 * to write a newer version for a function without breaking anything
	 */
	
	void printHi()
	{
		std::cout<<"Hi";
	}
}

namespace v2
{
	void printHi()
	{
		std::cout<<"Hi\n";
	}
}

int countme()
{
	static int count=0;		//static local variables have a static duration instead of automatic duration
	return ++count;
}

int main(int argc, char** argv)
{
	using constants::PI;
	
	/*
	 * using declaration will load only the variable/function to the scope so you can call them without scope resolution 
	 * operator next time
	 */
	
	float piSquarred = PI*PI;	//we don't have to specify the namespace because we used a using declaration
	printF(piSquarred);
	
	printHi();	//This will call the printHi in the inline namespace(v1) which won't print a new line
	
	cout<<endl;
	
	for (int i = 0; i < 15; i++)
	{
		printD(countme());	//counting the number of times printD is called
	}

	return 0;
}