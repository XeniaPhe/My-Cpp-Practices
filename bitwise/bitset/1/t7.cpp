#include <iostream>
#include <bitset>

int main()
{
	int a = 0b0001'1001;//25
	int b = 0b0001'1010;//26
	std::cout<<"a = "<<a<< " = "<< std::bitset<8>(a)<<"\n";
	std::cout<<"b : "<<b<<" = "<< std::bitset<8>(b)<<"\n";
	std::cout<< "a|b = "<< std::bitset<8>(a | b) << "\n";
	std::cout<<"a&b = " << std::bitset<8>(a&b) << "\n";
	std::cout << "a^b = " << std::bitset<8>(a^b) << "\n";
}
