/*
Question 2:
Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
The program computes the answer on the two numbers the user entered and prints the results. 
If the user enters an invalid symbol, the program should print nothing.

Example of program:

Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31

*/

/*
MY SOLUTION RESPONSE (works):
#include <iostream>

double doubleInput()
{
    std::cout << "Enter a double value: " << '\n';
    double value{};
    std::cin >> value;

    return value;
 }

char operatorStore()
{
    std::cout << "Enter +, -, *, or /: *" << '\n';
    char value{};
    std::cin >> value;

    if (value == '+' || value == '-' || value == '*' || value == '/') {
        return value;
    }
    else {
        return 0;
    }
}

double resolution(double x1, double x2, char op)
{
    double result{};

    if (op == '+') {

        result = x1 + x2;
        std::cout << x1 << " " << op << " " << x2 << " is " << result;
        return 0;
    }

    else if (op == '-') {
        result = x1 - x2;
        std::cout << x1 << " " << op << " " << x2 << " is " << result;
        return 0;
    }

    else if (op == '*') {
        result = x1 * x2;
        std::cout << x1 << " " << op << " " << x2 << " is " << result;
        return 0;
    }

    else if (op == '/') {
        result = x1 / x2;
        std::cout << x1 << " " << op << " " << x2 << " is " << result;
        return 0;
    }

    else {
        return 0;
    }

}

int main()
{
    // Programme first calls a function prompting input from a user to store a double in a variable. Repeat twice.

    double x1{doubleInput()};
    double x2{doubleInput()};

    // Programme then calls a function prompting input from a user to store an operator in a variable.
    char op{operatorStore()};

    // code to take the first input, operator, the second input.
    resolution(x1, x2, op);

    return 0;
}

*/

/*
Website solution:

#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

char getOperator()
{
    std::cout << "Enter +, -, *, or /: ";
    char operation{};
    std::cin >> operation;
    return operation;
}

void printResult(double x, char operation, double y)
{
    double result{};

    if (operation == '+')
        result = x + y;
    else if (operation == '-')
        result = x - y;
    else if (operation == '*')
        result = x * y;
    else if (operation == '/')
        result = x / y;
    else        // if the user did not pass in a supported operation
        return; // early return

    std::cout << x << ' ' << operation << ' ' << y << " is " << result << '\n';
}

int main()
{
    double x { getDouble() };
    double y { getDouble() };

    char operation { getOperator() };

    printResult(x, operation, y);

    return 0;
}

*/