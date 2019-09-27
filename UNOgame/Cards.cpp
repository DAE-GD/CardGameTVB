#include "Cards.h"

void Cards::CardReset()
{
	//this should cover all 4 colors from 1 to 9
	for (int i{0}; i < 4; i++)
	{
		//cards 1-9
		for (int x{1}; x < 10; x++)
		{
			m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
			m_ArryCards[m_CardCounter][1] = 0;
			m_ArryCards[m_CardCounter][2] = x;
			m_ArryCards[m_CardCounter][3] = i;
			m_ArryCards[m_CardCounter][4] = 2;
			m_CardCounter = m_CardCounter++;
		}
	}

	// '0' Cards
	for (int i{0}; i < 4; i++)
	{
		m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
		m_ArryCards[m_CardCounter][1] = 0;
		m_ArryCards[m_CardCounter][2] = 0;
		m_ArryCards[m_CardCounter][3] = i;
		m_ArryCards[m_CardCounter][4] = 1;
		m_CardCounter = m_CardCounter++;
	}

	// Block Cards
	for (int i{0}; i < 4; i++)
	{
		m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
		m_ArryCards[m_CardCounter][1] = 4;
		m_ArryCards[m_CardCounter][2] = 50;
		m_ArryCards[m_CardCounter][3] = i;
		m_ArryCards[m_CardCounter][4] = 2;
		m_CardCounter = m_CardCounter++;
	}

	// Reverse cards
	for (int i{0}; i < 4; i++)
	{
		m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
		m_ArryCards[m_CardCounter][1] = 5;
		m_ArryCards[m_CardCounter][2] = 40;
		m_ArryCards[m_CardCounter][3] = i;
		m_ArryCards[m_CardCounter][4] = 2;
		m_CardCounter = m_CardCounter++;
	}

	// Normal +2 Cards
	for (int i{0}; i < 4; i++)
	{
		m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
		m_ArryCards[m_CardCounter][1] = 6;
		m_ArryCards[m_CardCounter][2] = 30;
		m_ArryCards[m_CardCounter][3] = i;
		m_ArryCards[m_CardCounter][4] = 2;
		m_CardCounter = m_CardCounter++;
	}

	// ColorChange Cards normal
	for (int i{0}; i < 4; i++)
	{
		m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
		m_ArryCards[m_CardCounter][1] = 2;
		m_ArryCards[m_CardCounter][2] = 25;
		m_ArryCards[m_CardCounter][3] = 4;
		m_ArryCards[m_CardCounter][4] = 1;
		m_CardCounter = m_CardCounter++;
	}

	// ColorChange Cards +4
	for (int i{0}; i < 4; i++)
	{
		m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
		m_ArryCards[m_CardCounter][1] = 3;
		m_ArryCards[m_CardCounter][2] = 20;
		m_ArryCards[m_CardCounter][3] = 4;
		m_ArryCards[m_CardCounter][4] = 1;
		m_CardCounter = m_CardCounter++;
	}


	//Prints all cards
	/*for (int test{ 0 }; test < m_HeightArryCards; test++)
	{
		for (int test2{ 0 }; test2 < m_WidthArryCards; test2++)
		{
			std::cout << m_ArryCards[test][test2] << ' ';
		}
		std::cout << std::endl;
	}*/

	/*
		--Normal cards == 0
		--'0' Cards ==1 //Are seen as special cards because they do not have 2 time Each color only ones//
		Color change cards normal == 2 //Card value is set to 25 to differentiate from normal cards
		Color change cards +4 == 3 //Card value is set to 20 to differentiate from normal cards
		Block cards = 4  //Card value is set to 50 to differentiate from normal cards
		Reverse cards == 5 //Card value is set to 40 to differentiate from normal cards
		+ 2 cards == 6 // //Card value is set to 30 to differentiate from normal cards


		Blue == 0
		Yellow == 1
		RED == 2
		GREEN == 3
		Black == 4

		Digit == 0 -- 9
	  0	   1	 2		 3		 4
	+----+---+-------+-------+--------+
	| ID | 0 | Digit | color | Amount | //Normal Cards
	+----+---+-------+-------+--------+
	| ID | 1 | Digit | color | Amount | //'0' Cards
	+----+---+-------+-------+--------+
	| ID | 2 | Digit | color | Amount |
	+----+---+-------+-------+--------+
	| ID | 3 | Digit | color | Amount |
	+----+---+-------+-------+--------+
	| ID | 4 | Digit | color | Amount | //Block Cards
	+----+---+-------+-------+--------+
	| ID | 5 | Digit | color | Amount |
	+----+---+-------+-------+--------+

	*/
}

void Cards::CardTransformer(int id)
{
	if (id >= 1 && id <= 9)
	{
		//Card should be Blue
		std::cout << "Blue Card" << std::endl;
	}
	if (id >= 10 && id <= 18)
	{
		//Card should be Yellow
		std::cout << "Yellow Card" << std::endl;
	}
	if (id >= 19 && id <= 27)
	{
		//Card should be Red
		std::cout << "Red Card" << std::endl;
	}
	if (id >= 28 && id <= 36)
	{
		//Card should be Green
		std::cout << "Green Card" << std::endl;
	}
	if (id == 37)
	{
		//Blue 0
		std::cout << "blue 0" << std::endl;
	}
	if (id == 38)
	{
		//Yellow 0
		std::cout << "Yellow 0" << std::endl;
	}
	if (id == 39)
	{
		//Red 0
		std::cout << "Red 0" << std::endl;
	}
	if (id == 40)
	{
		//Green 0
		std::cout << "Green 0" << std::endl;
	}
	if (id == 41)
	{
		//Blue Block
		std::cout << "Blue block" << std::endl;
	}
	if (id == 42)
	{
		//Yellow Block
		std::cout << "Yellow Block" << std::endl;
	}
	if (id == 43)
	{
		//Red Block
		std::cout << "Red Block" << std::endl;
	}
	if (id == 44)
	{
		//Green Block
		std::cout << "Green block" << std::endl;
	}
	if (id == 45)
	{
		//reverse card blue
		std::cout << "Reverse Blue" << std::endl;
	}
	if (id == 46)
	{
		//reverse card Yellow
		std::cout << "Reverse Yellow" << std::endl;
	}
	if (id == 47)
	{
		//Reverse card red
		std::cout << "Reverse red" << std::endl;
	}
	if (id == 48)
	{
		//Reverse card Green
		std::cout << "Reverse green" << std::endl;
	}
	if (id == 49)
	{
		// +2 Card blue
		std::cout << "+2 blue" << std::endl;
	}
	if (id == 50)
	{
		// +2 Card Yellow
		std::cout << "+2 yellow" << std::endl;
	}
	if (id == 51)
	{
		// +2 Card Red
		std::cout << "+2 Red" << std::endl;
	}
	if (id == 52)
	{
		// +2 Card Green
		std::cout << "+2 Green" << std::endl;
	}
	if (id >= 53 && id <= 56)
	{
		//Normal Black color changing card
		std::cout << "Normal Color Changing" << std::endl;
	}
	if (id >= 57 && id <= 60)
	{
		//Black color changing card +4
		std::cout << "Block color changing +4 " << std::endl;
	}
}

void Cards::Cardshuffle()
{
	for (int i = 0; i <= pPlayers.getPlayerAmount(); i++)
	{
		for (int x = 0; i <= 7; i++)
		{
			do
			{
				m_TmpRandomGen = GenerateID();
				if (CheckEmptyCard(m_TmpRandomGen) == false)
				{
					//Make new random and check again
					m_tmpTrueOrFalse = true;
				}
				else
				{
					//Get out of loop. There are still cards
					m_tmpTrueOrFalse = false;
				}
			}
			while (m_tmpTrueOrFalse == true);
			m_PlayerCards[i][x] = m_TmpRandomGen;
		}
	}
}

void Cards::TmpShowCards()
{
	for (int x = 0; x <= 2; x++)
	{
		for (int i = 0; i <= 7; i++)
		{
			std::cout << "test" << std::endl;
			std::cout << m_PlayerCards[x][i] << std::endl;
		}
	}
}

bool Cards::CheckEmptyCard(int id)
{
	if (m_ArryCards[id][4] == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Cards::GenerateID()
{
	int r = rand() % 104 + 1;
	return r;
}
