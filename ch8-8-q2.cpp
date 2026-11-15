/*
Write a program that prints out the letters a through z along with their ASCII codes. 
Use a loop variable of type char.

#include <iostream>

int main()
{

	char loopVar{ 'a' };

	while (loopVar >= 'a' && loopVar <= 'z')
	{
		std::cout << loopVar << ", " << static_cast<int>(loopVar) << std::endl;
		++loopVar;
	}

	return 0;
}

*/