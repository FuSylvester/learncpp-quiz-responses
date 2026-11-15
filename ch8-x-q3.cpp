/*
Implement a game of Hi-Lo. First, your program should pick a random integer between 1 and 100. The user is given 7 tries to guess the number.

If the user does not guess the correct number, the program should tell them whether they guessed too high or too low. If the user guesses the right number, the program should tell them they won. If they run out of guesses, the program should tell them they lost, and what the correct number is. At the end of the game, the user should be asked if they want to play again. If the user doesn’t enter ‘y’ or ‘n’, ask them again.

For this quiz, assume the user enters a valid number.

Use the Random.h header from 8.15 -- Global random numbers (Random.h).

Here’s what your output should look like:

Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.
Guess #1: 64
Your guess is too high.
Guess #2: 32
Your guess is too low.
Guess #3: 54
Your guess is too high.
Guess #4: 51
Correct! You win!
Would you like to play again (y/n)? y
Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.
Guess #1: 64
Your guess is too high.
Guess #2: 32
Your guess is too low.
Guess #3: 54
Your guess is too high.
Guess #4: 51
Your guess is too high.
Guess #5: 36
Your guess is too low.
Guess #6: 45
Your guess is too low.
Guess #7: 48
Your guess is too low.
Sorry, you lose. The correct number was 49.
Would you like to play again (y/n)? q
Would you like to play again (y/n)? n
Thank you for playing.
For extra credit: make the minimum and maximum values and the number of guesses a configurable parameter.

*/

/*
My Solution:

#include <iostream>
#include "random.h"

int gameStart()
{
	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << std::endl;
	int trueNum{};
	trueNum = Random::get(1, 100);

	return trueNum;
}

int askInput(int guessNum)
{
	std::cout << "Guess #" << guessNum << ": ";
	int userGuess{};
	std::cin >> userGuess;

	return userGuess;
}

bool printResult(int trueNum, int userGuess, int guessNum, bool correctAnswer)
{
	if (userGuess == trueNum)
	{
		std::cout << "Correct! You win!" << std::endl;
		correctAnswer = true;
		return correctAnswer;
	}
	else if (userGuess < trueNum)
	{
		std::cout << "Your guess is too low" << std::endl;
		return correctAnswer;
	}
	else if (userGuess > trueNum)
	{
		std::cout << "Your guess is too high" << std::endl;
		return correctAnswer;
	}
}

void playAgain()
{
	std::cout << "Would you like to play again (y/n)? ";
	char userResponse{};
	std::cin >> userResponse;

	if (userResponse == 'n')
	{
		std::cout << "Thank you for playing.";
		std::exit(0);
	}
	else if (userResponse == 'y')
	{
	}
	else
	{
		std::cout << "Would you like to play again (y/n)? ";
	}
}

int main()
{
	bool keepPlaying = true;
	const int maxGuesses{ 7 };

	while (keepPlaying == true)
	{
		int trueNum{ gameStart() };
		int guessNum{ 1 };
		bool correctAnswer{ false };

		while (correctAnswer == false && guessNum <= maxGuesses)
		{
			int userGuess{ askInput(guessNum) };
			correctAnswer = printResult(trueNum, userGuess, guessNum, correctAnswer);
			++guessNum;
		}

		if (guessNum > maxGuesses && correctAnswer == false)
		{
			std::cout << "Sorry, you lose. The correct number was " << trueNum << "." << std::endl;
		}

		playAgain();

	}
	return 0;
}



*/