

/* 
 * File:   main.cpp
 * Author: xenia
 *
 * Created on March 27, 2022, 11:56 AM
 */

#include <cstdlib>

int main(int argc, char** argv)
{
	auto a{5};	//auto keyword lets the compiler deduce the type itself
	
	int b = 6;
	auto c = b;
	
	const int d{7};		//Top level const
	auto e = d;		//Top level const is dropped,e is now of type int
	
	const int f{8};
	const auto g=f;		//Top level const is dropped,and const is reapplied as a low level const
	
	const int h=9;
	auto& i = h;	//Top level const is dropped,reference applied
	
	const int& j = i;
	
	auto k = j;
	const auto l = j;
	auto& m = j;
	const auto& n =j;
	
	
	
	
	return 0;
}

