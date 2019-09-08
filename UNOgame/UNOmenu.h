#pragma once
#include <ostream>
#include <iostream>

class UNOmenu
{
public:
	void StartMenu()
	{
		int tmp;
		system("cls");
		std::cout << "Welcome to UNO!" << std::endl;
		std::cout << "1. Play Game" << std::endl;
		std::cout << "2. Change Usernames" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "Choose an number: ";
		std::cin >> tmp;

		switch (tmp)
		{
		case 1:
			PlayMenu();
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			std::cout << "ERROR in Switch when trying to select something from the menu. Maybe wrong character? has to be an number" << std::endl;
			break;
		}
	}

	void PlayMenu()
	{
		bool tmp{ true };
		while (tmp)
		{
			system("cls");
			std::cout << "Choose the amount of players 2-4.";
			std::cin >> m_AmountOfPlayers;
			std::cout << m_AmountOfPlayers << std::endl;
			std::cout << "" << std::endl;
			if (m_AmountOfPlayers == 2 || m_AmountOfPlayers == 3 || m_AmountOfPlayers == 4)
			{
				std::cout << "Please fill in the usernames" << std::endl;
				
				for (int i{ 0 }; i < m_AmountOfPlayers; i++)
				{
					std::cout << "Name: " ;
					std::cin >> m_Names[i];
					std::cout << "" << std::endl;
				}

				std::cout << "The player names are:" << std::endl;

				for (int i{ 0 }; i < m_AmountOfPlayers; i++)
				{
					std::cout << m_Names[i];
					std::cout << "" << std::endl;
				}
				
				tmp = false;
			}
			else
			{
				std::cout << "Wrong amount of players! Has to be between 2-4";
				tmp = true;
			}
		}

		std::cout << "" << std::endl;
		std::cout << "Press enter to start";
		std::cin.get();
		std::cin.get();
		system("cls");

		system("Pause");
	}

	
private:
	int m_AmountOfPlayers;
	std::string m_Names[4]{};
};

