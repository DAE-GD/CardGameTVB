#pragma once
#include <iostream>

class Cards
{
public:
	void CardReset()
	{
		//this should cover all 4 colors from 1 to 9
		for (int i{ 0 }; i < 4; i++)
		{
			//cards 1-9
			for (int x{ 1 }; x < 10; x++)
			{
				m_ArryCards[m_CardCounter][0] = m_CardCounter+1;
				m_ArryCards[m_CardCounter][1] = 0;
				m_ArryCards[m_CardCounter][2] = x;
				m_ArryCards[m_CardCounter][3] = i;
				m_ArryCards[m_CardCounter][4] = 2;
				m_CardCounter = m_CardCounter++;
			}
		}
		
		// '0' Cards
		for (int i{ 0 }; i < 4; i++)
		{
			m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
			m_ArryCards[m_CardCounter][1] = 0;
			m_ArryCards[m_CardCounter][2] = 0;
			m_ArryCards[m_CardCounter][3] = i;
			m_ArryCards[m_CardCounter][4] = 1;
			m_CardCounter = m_CardCounter++;
		}
		
		// Block Cards
		for (int i{ 0 }; i < 4; i++)
		{
			m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
			m_ArryCards[m_CardCounter][1] = 4;
			m_ArryCards[m_CardCounter][2] = 50;
			m_ArryCards[m_CardCounter][3] = i;
			m_ArryCards[m_CardCounter][4] = 2;
			m_CardCounter = m_CardCounter++;
		}

		// Reverse cards
		for (int i{ 0 }; i < 4; i++)
		{
			m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
			m_ArryCards[m_CardCounter][1] = 5;
			m_ArryCards[m_CardCounter][2] = 40;
			m_ArryCards[m_CardCounter][3] = i;
			m_ArryCards[m_CardCounter][4] = 2;
			m_CardCounter = m_CardCounter++;
		}
		
		// Normal +2 Cards
		for (int i{ 0 }; i < 4; i++)
		{
			m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
			m_ArryCards[m_CardCounter][1] = 6;
			m_ArryCards[m_CardCounter][2] = 30;
			m_ArryCards[m_CardCounter][3] = i;
			m_ArryCards[m_CardCounter][4] = 2;
			m_CardCounter = m_CardCounter++;
		}

		// ColorChange Cards normal
		for (int i{ 0 }; i < 4; i++)
		{
			m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
			m_ArryCards[m_CardCounter][1] = 2;
			m_ArryCards[m_CardCounter][2] = 25;
			m_ArryCards[m_CardCounter][3] = 4;
			m_ArryCards[m_CardCounter][4] = 1;
			m_CardCounter = m_CardCounter++;
		}

		// ColorChange Cards +4
		for (int i{ 0 }; i < 4; i++)
		{
			m_ArryCards[m_CardCounter][0] = m_CardCounter + 1;
			m_ArryCards[m_CardCounter][1] = 3;
			m_ArryCards[m_CardCounter][2] = 20;
			m_ArryCards[m_CardCounter][3] = 4;
			m_ArryCards[m_CardCounter][4] = 1;
			m_CardCounter = m_CardCounter++;
		}

		
		//Prints all cards
		for (int test{ 0 }; test < m_HeightArryCards; test++)
		{
			for (int test2{ 0 }; test2 < m_WidthArryCards; test2++)
			{
				std::cout << m_ArryCards[test][test2] << ' ';
			}
			std::cout << std::endl;
		}

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
	void CardTransformer(int ID)
	{
		if (ID >= 1 && ID <= 9)
		{
			//Card should be RED
			std::cout << "Red Card" << std::endl;
		}
		if (ID >= 9 && ID <= 17)
		{
			
		}
	}
private:
	
	int m_ArryCards[106][5]{};
	int m_CardCounter{0};
	int m_WidthArryCards{ 5 };
	int m_HeightArryCards{ 60 };
};

