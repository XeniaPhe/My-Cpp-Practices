
#include <iostream>

void test();

int g_x=11;		//Global variables by default have external linkage
float g_y = 10/3.0f;	//you can see sometimes a g prefix tied to the variable name with snake case to indicate it's a global variable

static int internal{5};		//static keyword makes a global variable/function have internal linkage

const char a = 'a';		//const variables by default have internal linkage
constexpr char b = 'b';		//constexpr variables by default have internal linkage

extern const char c = 'c';	//Although we can make const variables external with extern keyword
extern constexpr char d = 'd';	//You can indeed give external linkage to a constexpr variable via extern keyword but you can't forward declare them in another files which gives it no value

void print(std::string str)
{
	std::cout<<str;
}

void printLine(std::string str)		//functions by default have external linkage if no static keyword is present
{
	std::cout<<str<<'\n';
}

int main(int argc, char** argv)
{
	test();		//Don't forget to make a forward declaration first
	//build successful!
	return 0;
}

