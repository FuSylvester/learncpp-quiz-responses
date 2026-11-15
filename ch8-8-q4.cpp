/*
Now make the numbers print like this:

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

*/

/*
My solution:

#include <iostream>

int main()
{
    // outer loops between 5 and 1
    int outer{ 1 };
    while (outer <= 5)
    {
        int inner{5};
        while (inner >= 1)
        {
            // number of 'X's are equal to [outer] - [inner]
            if (inner <= outer)
            {
                std::cout << inner << ' ';
            }
            else
            {
                std::cout << "  ";
            }
            --inner;
        }

        std::cout << '\n';
        ++outer;
    }

    return 0;
}

*/