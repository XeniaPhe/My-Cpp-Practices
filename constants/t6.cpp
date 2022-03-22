#include <iostream>

int main()
{
    const int a=6;
    std::cout<<"The value of our constant integer is : " << a << "\n";

    std::cout<< "constexpr ensures that a constant must be a compile-time constant\n";

    constexpr int b{5+11};  //5+11 can be calculated at compile time,so this is valid
    std::cout<<"The value of constexpr constant b is : " << b << '\n';
    int age{};
    std::cout<<"Enter your age : \n";
    std::cin>>age;
    //constexpr int c{age}; //This does not compile because age's value is not determined at compile time hence the c's.

   
}