/*
Question 3:

Write a short program to simulate a ball being dropped off of a tower. 
To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds.
The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2

Expected output:

Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.

Note: Depending on the height of the tower, the ball may not reach the ground in 5 seconds -- that’s okay. We’ll improve this program once we’ve covered loops.
Note: The ^ symbol isn’t an exponent in C++. Implement the formula using multiplication instead of exponentiation.
Note: Remember to use double literals for doubles, e.g. 2.0 rather than 2.

*/

/*
MY SOLUTION RESPONSE (works):
#include <iostream>

double userHeightInput()
{
	std::cout << "Enter the height of the tower in meters: " << '\n';
	double max_height{};
	std::cin >> max_height;

	return max_height;
}

double distanceFallen(int seconds_elapsed)
{
	double gravity_constant{ 9.8 };
	double drop_distance{ gravity_constant * seconds_elapsed * seconds_elapsed / 2 };

	return drop_distance;
}

int main()
{
	// function to ask user for input regarding the height of the tower in meters and return that height
	double max_height{ userHeightInput() };

	// function to calculate height of the ball after x sections
	double ball_height{};

	ball_height = max_height - distanceFallen(0);
	std::cout << "At 0 seconds, the ball is at height: " << ball_height << '\n';

	ball_height = max_height - distanceFallen(1);
	std::cout << "At 1 seconds, the ball is at height: " << ball_height << '\n';

	ball_height = max_height - distanceFallen(2);
	std::cout << "At 2 seconds, the ball is at height: " << ball_height << '\n';

	ball_height = max_height - distanceFallen(3);
	std::cout << "At 3 seconds, the ball is at height: " << ball_height << '\n';

	ball_height = max_height - distanceFallen(4);
	std::cout << "At 4 seconds, the ball is at height: " << ball_height << '\n';

	ball_height = max_height - distanceFallen(5);
	std::cout << "At 5 seconds, the ball is on the ground" << '\n';

	return 0;

}
*/

/*
Website solution:

#include <iostream>

// Gets tower height from user and returns it
double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Returns the current ball height after "seconds" seconds
double calculateBallHeight(double towerHeight, int seconds)
{
	double gravity { 9.8 };

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	double fallDistance { gravity * (seconds * seconds) / 2.0 };
	double ballHeight { towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);
}

int main()
{
	double towerHeight{ getTowerHeight() };

	calculateAndPrintBallHeight(towerHeight, 0);
	calculateAndPrintBallHeight(towerHeight, 1);
	calculateAndPrintBallHeight(towerHeight, 2);
	calculateAndPrintBallHeight(towerHeight, 3);
	calculateAndPrintBallHeight(towerHeight, 4);
	calculateAndPrintBallHeight(towerHeight, 5);

	return 0;
}

*/