#include "Player.h"
#include "Board.h"


Player::Player(std::string PlayerName, int Accuracy)
{
	score = 301;
	name = PlayerName;
	accuracy = Accuracy;
	// Temp_Score = 0;
	throws = 3;
	wins = 0; 
	target = 0; 
	Round_Score = 0; 
	Success_Shot = 0; 
	Failed_Shot = 0;
	total_throws = 0; 
}

Player::~Player()
{

}

std::string Player::Get_Name()
{
	return name; 
}

short int Player::Get_Accuracy()
{
	return accuracy;
}

void Player::Set_Accuracy(int x)
{
	accuracy = x;
}

int Player::Get_Score()
{
	return score;
}

void Player::Change_Score(int x)
{
	score = score - x;
}

void Player::Set_Target(short int ideal_target)
{
	target = ideal_target;
}

short int Player::Get_Target()
{
	return target;
}

void Player::newGame()
{
	target = NULL;
}
short int Player::Get_Round_Score()
{
	return Round_Score;
}
short int Player::Check_Score(short int hit)
{
	int check = score - hit; 
	if ((check == 0) && (hit % 2 == 0))
	{
		return 3; 
	}
	else if (check <= 1)
	{
		return 1; 
	}
	else
	{
		return 0;
	}
}

std::string Player::winner()
{
	score = 0;
	return name;
}

void Player::Add_Win()
{
	wins++;
}

void Player::Reset_Round()
{
	Round_Score = 0; 
	Failed_Shot++;
}

float Player::Get_Success_Shot()
{
	return Success_Shot;
}
float Player::Get_Failed_Shot()
{
	return Failed_Shot;
}
void Player::Add_Success_Shot()
{
	Success_Shot++;
}

void Player::Add_Failed_Shot()
{
	Failed_Shot++;
}

float Player::Get_Total_Throws()
{
	return total_throws; 
}

void Player::Add_Total_Throws()
{
	total_throws++; 
}

unsigned int Player::Get_Wins()
{
	return wins; 
}