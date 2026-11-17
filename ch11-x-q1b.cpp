/*
1b) Why won’t the following compile?

#include <iostream>

void print()
{
    std::cout << "void\n";
}

void print(int x=0)
{
    std::cout << "int " << x << '\n';
}

void print(double x)
{
    std::cout << "double " << x << '\n';
}

int main()
{
    print(5.0f);
    print();

    return 0;
}
*/

/*
My solution:
5.0f is a float. When the compiler tries to find the appropriate 
overloaded function to match, it will have to decide between int and double
Converting to a double is a numeric promotion, which will be favoured.

However, when the compiler tries to resolve print(), it will need to decide
between choosing to print int x = 0 or double. Since Double has no
default value, it will not be able to resolve which function to call.

*/

/*
Actual answer:

Parameters with default arguments aren't counted for resolving overloaded functions
Hence, the compiler cannot tell whether the call to print() should reoslve to 
print() or print (int x = 0).
*/