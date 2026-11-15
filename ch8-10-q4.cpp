/*
Fizz Buzz is a simple math game used to teach children about divisibility. It is also sometimes used as an interview question to assess basic programming skills.

The rules of the game are simple: Starting at 1, and counting upward, replace any number divisible only by three with the word “fizz”, any number only divisible by five with the word “buzz”, and any number divisible by both 3 and 5 with the word “fizzbuzz”.

Implement this game inside a function named fizzbuzz() that takes a parameter determining what number to count up to. Use a for-loop and a single if-else chain (meaning you can use as many else-if as you like).

The output of fizzbuzz(15) should match the following:

1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz

*/

/*
My solution:

#include <iostream>

void fizzbuzz(int range_end)
{
    for (int i{ 1 };i <= range_end;++i)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "fizzbuzz" << std::endl;
        }
        else if (i % 3 == 0)
        {
            std::cout << "fizz" << std::endl;
        }
        else if (i % 5 == 0)
        {
            std::cout << "buzz" << std::endl;
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
}

int main()
{
    std::cout << "Enter an integer: " << std::endl;
    int range_end{};
    std::cin >> range_end;

    fizzbuzz(range_end);

    return 0;
}

*/
