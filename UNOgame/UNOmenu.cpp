#include "UNOmenu.h"

void UNOmenu::StartMenu()
{
	int tmp;
	system("cls");
	std::cout << "Welcome to UNO!" << std::endl;
	std::cout << "1. Play Game" << std::endl;
	//std::cout << "2. Change Usernames" << std::endl;
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
		std::cout <<
			"ERROR in Switch when trying to select something from the menu. Maybe wrong character? has to be an number"
			<< std::endl;
		break;
	}
}

void UNOmenu::PlayMenu()
{
	bool tmp{true};
	while (tmp)
	{
		system("cls");
		std::cout << "Choose the amount of players 2-4.";
		std::cin >> m_AmountOfPlayers;
		pPlayers.SetPlayerAmount(m_AmountOfPlayers);
		std::cout << pPlayers.getPlayerAmount() << std::endl;
		std::cout << "" << std::endl;
		if (pPlayers.getPlayerAmount() == 2 || pPlayers.getPlayerAmount() == 3 || pPlayers.getPlayerAmount() == 4)
		{
			std::cout << "Please fill in the usernames" << std::endl;

			for (int i{0}; i < pPlayers.getPlayerAmount(); i++)
			{
				std::cout << "Name: ";
				std::cin >> m_tmpUsernam;
				pPlayers.StoreUserNames(m_tmpUsernam, i);
				std::cout << "" << std::endl;
			}

			std::cout << "The player names are:" << std::endl;

			for (int i{0}; i < pPlayers.getPlayerAmount(); i++)
			{
				std::cout << pPlayers.GetName(i) << std::endl;
			}

			tmp = false;
		}
		else
		{
			std::cout << "Wrong amount of players! Has to be between 2-4";
			tmp = true;
		}

		std::cout << "" << std::endl;
	}

	std::cout << "" << std::endl;
	std::cout << "Press enter to start" << std::endl;
	cCards.Cardshuffle();
	cCards.TmpShowCards();
}

void UNOmenu::ShowPlayer()
{
	pPlayers.GetTurnForPlayer();

	system("cls");
	std::cout << pPlayers.GetName(pPlayers.GetTurnForPlayer());
	std::cout << " is on turn" << std::endl;
	std::cout << "" << std::endl;
}
