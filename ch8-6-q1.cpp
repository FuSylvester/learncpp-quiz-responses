/*
Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations: +, -, *, /, or % (remainder). Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. If an invalid operator is passed into the function, the function should print an error message. For the division operator, do an integer division, and don’t worry about divide by zero.

Hint: “operator” is a keyword, variables can’t be named “operator”.
*/

/*
My initial solution - works, but I forgot that you can use char in case, could have simplified without the if and else ifs

#include <iostream>

int calculate(int x, int y, char opSign)
{

	int situation{};
	if (opSign == '+')
	{
		situation = 1;
	}
	else if (opSign == '-')
	{
		situation = 2;
	}
	else if (opSign == '*')
	{
		situation = 3;
	}
	else if (opSign == '/')
	{
		situation = 4;
	}
	else if (opSign == '%')
	{
		situation = 5;
	}
	else
	{
		situation = 6;
	}

	switch (situation)
	{
		case 1:
			return (x + y);
			break;
		case 2:
			return (x - y);
			break;
		case 3:
			return (x * y);
			break;
		case 4:
			return(x / y);
			break;
		case 5:
			return(x % y);
			break;
		case 6:
			std::cout << "Invalid operator used" << std::endl;
	}

	return 0;

}

int main()
{
	std::cout << "Enter an integer: " << std::endl;
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: " << std::endl;
	int y{};
	std::cin >> y;

	std::cout << "Enter an operator: " << std::endl;
	char opSign{};
	std::cin >> opSign;

	std::cout << "The result is: " << calculate(x, y, opSign) << std::endl;

	return 0;
}

*/