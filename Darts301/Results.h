#pragma once
#include <iostream>

void Results(Player* current_player, int games)
{
	float Success_Rate = (current_player->Get_Success_Shot() / current_player->Get_Total_Throws()) * 100;



	std::cout << "Results for " << current_player->Get_Name() << std::endl; 
	std::cout << "Games Played: " << games << std::endl; 
	std::cout << "Accuracy: " << current_player->Get_Accuracy() << std::endl;
	std::cout << "Total Shots: " << current_player->Get_Total_Throws() << std::endl; 
	std::cout << "Shots Hit on Target: " << current_player->Get_Success_Shot() << std::endl;
	std::cout << "Shots Failed to Hit Target: " << current_player->Get_Failed_Shot() << std::endl; 
	std::cout << "Number of Wins: " << current_player->Get_Wins() << std::endl; 
	std::cout << "Success Rate: " << Success_Rate << "\n\n\n\n\n";

}