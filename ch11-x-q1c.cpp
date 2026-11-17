/*
1c) Why won’t the following compile?

#include <iostream>

void print(long x)
{
    std::cout << "long " << x << '\n';
}

void print(double x)
{
    std::cout << "double " << x << '\n';
}

int main()
{
    print(5);

    return 0;
}
*/

/*
My Solution:
The compiler has to resolve whether print(5) will resolve to print(long x) 
or print (double x). Both are numeric conversions (int to long/double)
Since the choice is ambiguous, the compiler will show an error.

*/