/*
What is the output of this program and why?

#include <iostream>

template <typename T>
int count(T) // This is the same as int count(T x), except we're not giving the parameter a name since we don't use the parameter
{
    static int c { 0 };
    return ++c;
}

int main()
{
    std::cout << count(1) << '\n';
    std::cout << count(1) << '\n';
    std::cout << count(2.3) << '\n';
    std::cout << count<double>(1) << '\n';

    return 0;
}
*/

/*
My solution:

Terminal output is
1
2
1
2

When the first count(1) is called, the function count<int>(int) will be called, returning 1.
When the second count(2) is called, the same function count<int>(int) will be called, hence given 
the static designation, the value of 2 will be returned

When count(2.3) is called, the function count<double>(double) will be called, which existed only for the first time.
Hence, the value of 1 will be returned. This is a new function with its own static c variable. 
*/