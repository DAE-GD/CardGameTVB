#pragma once
class Cards
{
public:
	void CardReset()
	{
		//Normal cards
		m_ArryCards[0][0] = 0;
		m_ArryCards[0][1] = 0;
		m_ArryCards[0][2] = 1;
	}
private:
	/*
		Normal cards == 0
		'0' Cards ==1 //Are seen as special cards because they do not have 2 time Each color only ones//
		Color change cards normal == 2
		Color change cards +4 == 3
		Block cards = 4
		Reverse cards == 5
		+ 2 cards == 6
	

		Blue == 0
		Yellow == 1
		RED == 2
		GREEN == 3
		Black == 4

		Digit == 0 -- 9

	+----+---+-------+-------+--------+
	| ID | 0 | Digit | color | Amount | //Normal Cards
	+----+---+-------+-------+--------+
	| ID | 1 | Digit | color | Amount |
	+----+---+-------+-------+--------+
	| ID | 2 | Digit | color | Amount |
	+----+---+-------+-------+--------+
	| ID | 3 | Digit | color | Amount |
	+----+---+-------+-------+--------+
	| ID | 4 | Digit | color | Amount |
	+----+---+-------+-------+--------+
	| ID | 5 | Digit | color | Amount |
	+----+---+-------+-------+--------+

	*/

	int m_ArryCards[7][4]{};
};

