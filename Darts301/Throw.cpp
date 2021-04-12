#include "Throw.h"
#include "Board.h"
#include <iostream>

int Throw::Throw_Dart(Player* current_player)
{
	short int random = rand() % 100 + 1;

	if (current_player->Get_Target() == 25) 
	{
		if (random <= current_player->Get_Accuracy()) // if the random number is equal or less than the accuracy number. Player has hit its target 
		{
			return 25;
		}
		else if (random <= 90)
		{
			return 50;
		}
		else
		{
			return rand() % 20 + 1;
		}
	}
	else
	{
		if (random <= current_player->Get_Accuracy())
		{
			return current_player->Get_Target();
		}
		else if (random <= 92)
		{
			return Board::Board_Layout[0][current_player->Get_Target()];
		}
		else if (random <= 96)
		{
			return Board::Board_Layout[1][current_player->Get_Target()];
		}
		else if (random <= 98)
		{
			return 2 * current_player->Get_Accuracy();
		}
		else
		{
			return 3 * current_player->Get_Accuracy();
		}
	}
}
int Throw::Throw_Bull(Player* current_player)
{
	short int random = rand() % 100 + 1;

	if (random <= (current_player->Get_Accuracy() - 20))
	{
		return 50;
	}
	else if (random <= 85)
	{
		return 25;
	}
	else
	{
		return rand() % 20 + 1;
	}
}

int Throw::Strategy(Player* current_player)
{
	short int score = current_player->Get_Score(); 

	if (score > 100)
	{
		current_player->Set_Target(20);
		return 0; 
	}
	else if (score > 50 && score % 2)
	{
		current_player->Set_Target(2);
		return 0;
	}
	else if (score > 50)
	{
		current_player->Set_Target(1);
		return 0; 
	}
	else
	{
		return -1; 
	}

}