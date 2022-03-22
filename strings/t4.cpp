#include <iostream>
#include <string>

int main(void)
{
	std::string str {"This is a string variable"};
	std::string scstr = "This is another string variable";
	std::cout << str << "\n\n" << scstr << "\n";

	std::string name{};
	std::cout << "What is your name?\n";
	std::cin >> name;

	std::string fullName{};
	std::cout << "What is your fullname?\n";
	std::getline(std::cin >> std::ws,fullName);
	std::cout << "Your name is " << name << " and your fullname is " << fullName <<"\n";
	std::cout << "The length of your full name is " << fullName.length() << "\n";		//This is a member function
	int length = static_cast<int>(fullName.length());
	std::cout << "This is how you should convert the length of a string into an integer : " << length;

}
