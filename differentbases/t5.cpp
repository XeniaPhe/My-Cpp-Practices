#include <bitset>
#include <iostream>

int main()
{
	int decimal{1111};
	int binary{0b1111};
	int octal{01111};
	int hexadecimal {0x1111};
	
	std::cout << "Decimal     1111 = " << decimal << "\n";
	std::cout << "Binary      1111 = " << binary << "\n";
	std::cout << "Octal       1111 = " << octal << "\n";
	std::cout << "Hexadecimal 1111 = " << hexadecimal << "\n";

	std::cout << "There is a way around to print numbers in any base we want(except binary) using cout" << std::endl;
	std::cout << "Decimal in hex format = " <<std::hex << decimal << "\n";
	std::cout << "Binary in octal format  = " <<std::oct << binary << "\n";
	std::cout << "Hexadecimal in decimal format = " << std::dec << hexadecimal << "\n";
	std::cout << "Octal in hex format = " << std::hex << "\n";

	std::cout <<"But we should use std::bitset<> to be able to print binary on the console\n";
	std::bitset<8> binary1{0b10011100};
	std::bitset<8> binary2{0b1001'1100};
	int binary3{0b1001'1100};
	//std::cout<<"These 3 numbers have the same mathematical value but different types : " << binary1 == binary2 << " - " << binary2==binary3 + "\n";
	
	std::cout << binary1 << '\n' << binary2<<'\n'<< binary3 << '\n';
	std::cout << std::bitset<4>{0b0001} << '\n'; 
	
	
}
