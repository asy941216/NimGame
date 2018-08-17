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
	int status = 0;
};

void SetGame(Basket* b);
void PrintGame(Basket* b);
void PlayWithPlayer(Player* p1, Player* p2, Basket* b);
void SelectStones(Player* p);
void PlayerTakesStones(Player* p, Basket* b);
void PrintWinner(Player* p1, Player* p2, int mode, Basket* b);
void PlayWithBot(Player* p1, Player* p2, Basket* b);
void BotSelectsStones(Player* p, Basket* b);
void BotTakesStones(Player* p, Basket* b);