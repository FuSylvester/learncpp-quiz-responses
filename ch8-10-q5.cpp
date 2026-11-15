/*
Modify the FizzBuzz program you wrote in the previous quiz to add the rule that numbers divisible by seven should be replaced with “pop”. Run the program for 150 iterations.

In this version, using an if/else chain to explicitly cover every possible combination of words will result in a function that is too long. Optimize your function so only 4 if-statements are used: one for each of the non-compound words (“fizz”, “buzz”, “pop”), and one for the case where a number is printed.


Hint: Use a boolean variable to keep track of whether a number has matched one of the conditions.
Here are some snippets of the expected output:

4
buzz
fizz
pop
8

19
buzz
fizzpop
22

104
fizzbuzzpop
106
*/

/*
My Solution:

#include <iostream>

void fizzbuzzpop(int range_end)
{
    bool isThree{false};
    bool isFive{false};
    bool isSeven{false};

    for (int i{ 1 };i <= range_end;++i)
    {
        isThree = (i % 3 == 0);
        isFive = (i % 5 == 0);
        isSeven = (i % 7 == 0);

        if (isThree)
        {
            std::cout << "fizz";
        }
        if (isFive)
        {
            std::cout << "buzz";
        }
        if (isSeven)
        {
            std::cout << "pop";
        }
        if (isThree == false && isFive == false && isSeven == false)
        {
            std::cout << i;
        }

        std::cout << std::endl;

    }

}

int main()
{
    std::cout << "Enter an integer: " << std::endl;
    int range_end{};
    std::cin >> range_end;

    fizzbuzzpop(range_end);



    return 0;
}

*/