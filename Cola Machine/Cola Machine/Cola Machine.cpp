// Cola Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int choice;

	do
	{
		std::cout << "List of beverages\n\nCoke\t1\nWater\t2\nSprite\t3\n\nWhat is your favorite beverage:";

		std::cin >> choice;
		std::cout << "\n";
		//std::cout << "\n";
		if (choice > 3 || choice < 1 || std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "Error. choice was not valid, here is your money back\n\n";
		}

	} while (choice > 3 || choice < 1);

	if (choice == 1)
	{
		std::cout << "You Chose Coke\n";
	}
	else if (choice == 2)
	{
		std::cout << "You Chose Water\n";
	}
	else if (choice == 3)
	{
		std::cout << "You Chose Sprite\n\n";
	}

	system("Pause");

    return 0;
}

