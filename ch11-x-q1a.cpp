/*
1a) What is the output of this program and why?

#include <iostream>

void print(int x)
{
    std::cout << "int " << x << '\n';
}

void print(double x)
{
    std::cout << "double " << x << '\n';
}

int main()
{
    short s { 5 };
    print(s);

    return 0;
}

*/

/*
My Solution:

The terminal output will be "int 5"

Converting a short to an int is a numeric promotion whereas converting a short to a double is a numeric conversion
Numeric conversions are not favoured by compilers. 

*/