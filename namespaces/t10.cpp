#include <iostream>
#include "basicmath.h"
#include "logarithmic.h"

void printLine(std::string str) { std::cout<<str<<'\n'; }
void printGlobal() 
{
    std::cout<<"This is global namespace"<<'\n';
}

namespace foo
{
    void printLine(std::string str) { std::cout<<str<<'\n'; }
    void printGlobal(std::string str) { ::printGlobal();printLine(str);}
}

namespace goo
{
    void printLine(std::string str) { std::cout<<str<<'\n'; }
    void printGlobal(std::string str) { ::printGlobal();foo::printLine(str);}
}

namespace baz
{
    void bazFunction(){}
    namespace bar
    {
        void barFunction(){}
    }
}

namespace baz::taz //taz is now a namespace inside baz namespace
{
    void tazFunction(){}
}

namespace a
{
    namespace b
    {
        namespace c
        {
            namespace d
            {
                namespace e
                {
                    namespace f
                    {
                        namespace g
                        {
                            namespace h
                            {
                                namespace i
                                {
                                    namespace j
                                    {
                                        namespace k
                                        {
                                            namespace l
                                            {
                                                namespace m
                                                {
                                                    namespace n
                                                    {
                                                        namespace o
                                                        {
                                                            void TheFunctionOfFunctions(){std::cout<<"I am indeed the function of functions!!!\n";}
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    printLine("This string is called in the global namespace");
    ::printLine("This string is called in the global namespace");
    foo::printLine("This string is called in the foo namespace");
    goo::printLine("This string is called in the goo namespace");
    foo::printGlobal("Whatt??");
    goo::printGlobal("The heckk??");
    printGlobal();
    printLine("Is going onn??\n");

    math::add(5,6);
    math::log10(45);

    baz::bazFunction();
    baz::bar::barFunction();
    baz::taz::tazFunction();

    namespace oAlias = a::b::c::d::e::f::g::h::i::j::k::l::m::n::o;//This is now an alias for o namespace

    oAlias::TheFunctionOfFunctions();

    return EXIT_SUCCESS;
}