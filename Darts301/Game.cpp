#include "Game.h"
#include "Throw.h"
#include "Board.h"
#include <iostream>

Game::Game()
{
	Current_Round = 0; 
	Rounds = 0;
	games = 0;
	players[0] = 0; 
	players[1] = 0; 
}
Game::~Game()
{

}

int Game::Get_Games()
{
	return games;
}
int Game::Get_Round()
{
	return Current_Round; 
}
void Game::Play_Game(char first)
{
	short int current_player = first;
	Throw new_Throw;
	while (players[0]->Get_Score() != 0 && players[1]->Get_Score() != 0)
	{

		for (short int shots{}; shots < 2; shots++)
		{
			short int hit = NULL;
			for (short int throws{}; throws < 3; throws++)
			{
				short int score;

				int Strat = new_Throw.Strategy(players[current_player]);

				if (Strat == -1)
				{
					hit = new_Throw.Throw_Bull(players[current_player]);
				}
				else
				{
					hit = new_Throw.Throw_Dart(players[current_player]); 
				}
				players[current_player]->Add_Total_Throws();

				score = players[current_player]->Check_Score(hit);
				if (hit == players[current_player]->Get_Target())
				{
					players[current_player]->Add_Success_Shot();
				}
				else
				{
					players[current_player]->Add_Failed_Shot();
				}

				if (score == 0)
				{
					players[current_player]->Change_Score(hit);
				}
				else if (score == 1)
				{
					players[current_player]->Reset_Round();
				}
				else if (score == 3)
				{
					winner = players[current_player]->winner();
					// players[current_player]->Add_Win();
					break; // break 
				}
				std::cout << "Player: " << players[current_player]->Get_Name() << " score: " << players[current_player]->Get_Score() << std::endl;
			}
			players[current_player]->Reset_Round();
			current_player = !current_player;
		}
	}
	if (players[0]->Get_Score() == 0)
	{
		players[0]->Add_Win();
	}
	else if (players[1]->Get_Score() == 0)
	{
		players[1]->Add_Win(); 
	}

}
void Game::Add_Round(int rounds)
{
	Rounds = Rounds + rounds; 
}
void Game::First_Player(Player* current_player, short int position)
{
	players[position] = current_player;
	// players.push_back(current_player); 
}
std::string Game::Get_winner()
{
	return winner; 
}
