/*
Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:

Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).
*/

/*
#include <iostream>
#include <string>
#include <string_view>

// function that prompts user for first name and last name (a string) and returns that string
std::string getName(int n)
{ 
	std::string input{};
	std::cout << "Enter the name of person #" << n << ": " << input << std::endl;
	std::getline(std::cin >> std::ws, input);

	return input;
}

// function that prompts the user for their age (integer) and returns the age
int personAge(std::string_view name)
{
	std::cout << "Enter the age of " << name << " : " << std::endl;
	int age{};
	std::cin >> age;

	return age;
}

void printResults(std::string_view p1, std::string_view p2, int p1_age, int p2_age)
{
	if (p2_age > p1_age)
	{
		std::cout << p2 << "(age " << p2_age << ") is older than " << p1 << "(age " << p1_age << ")." << std::endl;
	}
	else if (p2_age < p1_age)
	{
		std::cout << p2 << "(age " << p2_age << ") is younger than " << p1 << "(age " << p1_age << ")." << std::endl;
	}
	else
	{
		std::cout << p2 << "(age " << p2_age << ") is the same age as " << p1 << "(age " << p1_age << ")." << std::endl;
	}
}

int main()
{	
	int x = 1;
	std::string personOne{ getName(x) };
	int personOneAge = personAge(personOne);

	x += x;
	std::string personTwo{ getName(x) };
	int personTwoAge = personAge(personTwo);

	printResults(personOne, personTwo, personOneAge, personTwoAge);

	return 0;
}
*/