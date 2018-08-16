#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Player
{
	int selBasket = 0;
	int selStone = 0;
	int win = 0;
	const char* turn;
	int temp = 0;
};

struct Basket
{
	int basketNum = 0;
	int* basket;
	int rockNum = 0;
	int total = 0;
};

void TakeStones(Player* p, Basket* b);
void SetGame(Basket* b);
void PlayWithPlayer(Player* p1, Player* p2, Basket* b);
void PrintWinner(Player* p1, Player* p2);
void PrintGame(Basket* b);
void SelectStones(Player* p);