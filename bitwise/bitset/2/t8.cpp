#include <iostream>
#include <bitset>

int main()
{
    std::bitset<8> a {0b1111'1111}; //unsigned char max
    std::bitset<8> b {0b1010'10101};//on-off
    unsigned long c = a.to_ulong();
    unsigned long d = b.to_ulong();

    std::cout<< "a = " << a << " = "<< c << std::endl;
    std::cout<< "b = " << b << " = "<< d << std::endl;
    a.flip(7);
    b.set(1);
    a.reset(4);
    if(a.test(5))
        b.flip(5);
    else 
        b.flip(3);
    c = a.to_ulong();
    d = b.to_ulong();

    std::cout<< "a = " << a << " = "<< c << std::endl;
    std::cout<< "b = " << b << " = "<< d << std::endl;
}