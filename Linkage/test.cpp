
#include <iostream>

extern float g_y;
extern const char c;	//Forward declaration of const char c
//extern constexpr char d;	//You can not forward declare a constexpr variable so the build will fail
void printLine(std::string str);


void test()
{
	//g_x = 4;	//build fails because we should first write a forward declaration for this variable so that linker compiler will know that it exists
	g_y=5;	//we forward declared g_y so there are no build errors
	//int h = internal;	//build fails because internal was created with static keyword which makes it an internal variable
	//int aSquared = a*a;		//netbeans code completion doesn't even show us a when we hit CTRL+space because const variables have internal linkage
	//int bSquared = b*b;		//The same applies to here
	int cSquared = c*c;		//This shouldn't cause any compile issues
	//int dSquared = d*d;		//Nopee
	
	//print("This will cause a build error because we didn't forward declare the print function in this file");
	
	printLine("This will compile just fine and print this sentence when run");
}

static void printMax(int a,int b)	//this is an internal function
{
	int smaller;
	std::cout<< (smaller = a>b ? a : b) << " is larger than " << smaller<<"\n";
}