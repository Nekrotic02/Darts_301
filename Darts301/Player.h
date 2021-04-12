#pragma once
#include <iostream>
#include <string>
class Player
{
private:
    std::string name; 
    short int score; 
    short int accuracy; 
    // short int Temp_Score; 
    short int throws; 
    unsigned int wins; 
    short int target; 
    short int Round_Score; 
    float Success_Shot; 
    float Failed_Shot; 
    float total_throws; 
public:

    Player(std::string PlayerName, int accuracy);
    ~Player(); 

    std::string Get_Name(); 
    short int Get_Accuracy(); 
    void Set_Accuracy(int accuracy);
    int Get_Score(); 
    void Change_Score(int temp_score);
    void Set_Target(short int ideal_target);
    short int Get_Target(); 
    float Calculate_Wins(int games, int wins);
    void newGame(); 
    short int Get_Round_Score(); 
    short int Check_Score(short int hit); 
    std::string winner(); 
    void Add_Win(); 
    void Reset_Round(); 
    float Get_Success_Shot(); 
    void Add_Success_Shot();
    float Get_Failed_Shot(); 
    void Add_Failed_Shot();
    float Get_Total_Throws(); 
    void Add_Total_Throws(); 
    unsigned int Get_Wins(); 
};

