#pragma once
#include "Throw.h"
#include "Player.h"
#include <iostream>
#include <vector>
class Game
{
private:
	int games;
	int Current_Round; 
	int Rounds; 
	int game_type = 301;
	std::string winner; 

public:
	Player* players[2];
	// std::vector<Player*> players; 
public:
	Game();
	~Game(); 
	int Get_Games(); 
	int Get_Round(); 
	void Add_Round(int rounds);
	void Play_Game(char first);
	void First_Player(Player* current_player, short int position); 
	std::string Get_winner(); 
};

