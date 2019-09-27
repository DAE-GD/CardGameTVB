#pragma once
#include <iostream>
#include "PLayers.h"

class Cards
{
	PLayers pPlayers;
public:
	void CardReset();

	void CardTransformer(int id);

	void Cardshuffle();

	void TmpShowCards();

	bool CheckEmptyCard(int id);

	int GenerateID();
private:
	int m_PlayerCards[4][60];
	int m_ArryCards[65][5]{};
	int m_CardCounter{0};
	int m_WidthArryCards{ 5 };
	int m_HeightArryCards{ 60 };
	int m_TmpRandomGen = 0;
	bool m_tmpTrueOrFalse = false;
	
};

//
//--Normal cards == 0
//--'0' Cards == 1 //Are seen as special cards because they do not have 2 time Each color only ones//
//Color change cards normal == 2 //Card value is set to 25 to differentiate from normal cards
//Color change cards + 4 == 3 //Card value is set to 20 to differentiate from normal cards
//Block cards = 4  //Card value is set to 50 to differentiate from normal cards
//Reverse cards == 5 //Card value is set to 40 to differentiate from normal cards
//+ 2 cards == 6 // //Card value is set to 30 to differentiate from normal cards

