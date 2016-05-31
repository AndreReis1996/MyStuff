// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <limits>

int main()
{
	int score = -1;

	do
	{
		std::cout << "Enter your score:";
		std::cin >> score;
		//std::cout << "\n";
		if (score > 100 || score < 0 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "Invalide Score\n";
		}

	} while (score > 100 || score < 0);




	if (score >= 0 && score <= 59)
	{
		std::cout << "Your Grade is: F\n";
		std::cout << "Your score is: " << score << "\n";
	}
	else if (score > 59 && score <= 69)
	{
		std::cout << "Your Grade is: D\n";
		std::cout << "Your score is: " << score << "\n";
	}
	else if (score > 69 && score <= 79)
	{
		std::cout << "Your Grade is: C\n";
		std::cout << "Your score is: " << score << "\n";
	}
	else if (score > 79 && score <= 89)
	{
		std::cout << "Your Grade is: B\n";
		std::cout << "Your score is: " << score << "\n";
	}
	else if (score > 89 && score < 100)
	{
		std::cout << "Your Grade is: A\n";
		std::cout << "Your score is: " << score << "\n";
	}
	else
	{
		std::cout << "Your Grade is: A+\n";
		std::cout << "Your score is: " << score << "\n";
	}


	system("Pause");

	return 0;
}

