#pragma once
#include <string>
#include <iostream>

class PLayers
{
public:
	void StoreUserNames(std::string Username, int pNumber)
	{
		m_Names[pNumber] = Username;
		std::cout << "Player Succesfully Saved" << std::endl;
	}

	std::string GetName(int pNumber)
	{
		return m_Names[pNumber];
	}

	void SetPlayerAmount(int Amount)
	{
		m_PlayerAmount = Amount;
	}

	int getPlayerAmount()
	{
		return m_PlayerAmount;
	}

	int GetTurnForPlayer()
	{
		return m_PlayersTurn;
	}

	int SetTurnForPlayer()
	{
		m_PlayersTurn++;
		if (m_PlayersTurn == 4)
		{
			m_PlayersTurn = 0;
		}
	}
private:
	std::string m_Names[4]{};
	int m_PlayerAmount{ 0 };
	int m_PlayersTurn = 0;
};

