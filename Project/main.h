#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Player
{
	int selBasket = 0;
	int selRock = 0;
	int win = 0;
	const char* turn;
};

struct Basket
{
	int basketNum = 0;
	int* basket;
	int rockNum = 0;
	int total = 0;
};

void TakeStones(Player* p, Basket* b);