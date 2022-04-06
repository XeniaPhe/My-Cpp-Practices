#ifndef DATA_TYPES_H
#define DATA_TYPES_H

enum Boolean    //This is an unscoped enumerated type and it is defined in the scope it's created which is global scope for this case
{
    False,//0   //First element of an enum defaults to 0   
    True//1    //The value increments by one for subsequent enum elements
};

enum Status
{
    //False Because unscoped enums lay in the scope they're defined,you can't define two enum members in two different enums in the same scope
    //True
    Undefined
};

namespace Status
{
    enum Status     //Definig unscoped enumerated types inside its own namespace is a solution tp the aboce problem
    {               //We can now access this enum by Status::Status
        False,
        True,
        Undefined
    };
}

enum class Colors
{
    Red=5,
    Green,//6
    Yellow,//7
    White,//8
    Black//9
};

#endif