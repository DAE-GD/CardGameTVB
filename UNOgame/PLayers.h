#pragma once
#pragma once
#include <string>
#include <iostream>

class PLayers
{
public:
	void StoreUserNames(std::string Username, int pNumber);

	std::string GetName(int pNumber);

	void SetPlayerAmount(int Amount);

	int getPlayerAmount();

	int GetTurnForPlayer();

public:
	int SetTurnForPlayer();
private:
	std::string m_Names[4]{};
	int m_PlayerAmount{ 0 };
	int m_PlayersTurn = 0;
	std::string m_PlayerNames[4]{};
};