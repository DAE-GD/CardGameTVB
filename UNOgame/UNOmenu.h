#pragma once
#include <ostream>
#include <iostream>
#include "PLayers.h"
#include "Cards.h"
class UNOmenu
{
	PLayers pPlayers;
	Cards cCards;
	
public:
	void StartMenu();

	void PlayMenu();

	void ShowPlayer();

private:
	int m_AmountOfPlayers=0;
	std::string m_tmpUsernam;
};

