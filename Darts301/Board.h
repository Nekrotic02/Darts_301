#pragma once
class Board
{
public:
	static constexpr short int Board_Layout[2][21] = { {0,20,15,17,18,12,13,19,16,14,6,8,9,4,11,10,7,2,1,3,5},{0,18,17,19,13,20,10,16,11,12,15,14,5,6,9,2,8,3,4,7,1} };
	static constexpr short int Odd[10] = { 1,3,5,7,9,11,13,15,17,19 }; 
	static constexpr short int Even[10] = { 2,4,6,8,10,12,14,16,18,20 };
};

