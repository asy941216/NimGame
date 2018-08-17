#pragma once
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "ForBot.h"
#include "Player.h"
#include "Basket.h"
using namespace std;

void SetGame(Basket* b);
void PrintGame(Basket* b);
void PlayWithPlayer(Player* p1, Player* p2, Basket* b);
void SelectStones(Player* p);
void PlayerTakesStones(Player* p, Basket* b);
void PrintWinner(Player* p1, Player* p2, int mode, Basket* b);
void PlayWithBot(Player* p1, Player* p2, Basket* b);
void BotSelectsStones(Player* p, Basket* b);
void BotTakesStones(Player* p, Basket* b);