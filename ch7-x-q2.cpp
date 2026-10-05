/*
Write a file named constants.h that makes the following program run. 
If your compiler is C++17 capable, use an inline constexpr variable. 
Otherwise, use a normal constexpr variable. maxClassSize should have value 35.

main.cpp:

#include "constants.h"
#include <iostream>

int main()
{
	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;


	if (students > Constants::maxClassSize)
		std::cout << "There are too many students in this class";
	else
		std::cout << "This class isn't too large";

	return 0;
}

*/

/*
My solution (technically a header file):

#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace  Constants // define a user-defined namespace called Constants
{
	constexpr int maxClassSize{35};
}

#endif

*/