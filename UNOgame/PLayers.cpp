#include "PLayers.h"

void PLayers::StoreUserNames(std::string Username, int pNumber)
{
	m_Names[pNumber] = Username;
	std::cout << "Player Succesfully Saved" << std::endl;
}

std::string PLayers::GetName(int pNumber)
{
	return m_Names[pNumber];
}

void PLayers::SetPlayerAmount(int Amount)
{
	m_PlayerAmount = Amount;
}

int PLayers::getPlayerAmount()
{
	return m_PlayerAmount;
}

int PLayers::GetTurnForPlayer()
{
	return m_PlayersTurn;
}

int PLayers::SetTurnForPlayer()
{
	m_PlayersTurn++;
	if (m_PlayersTurn == 4)
	{
		m_PlayersTurn = 0;
	}
}
