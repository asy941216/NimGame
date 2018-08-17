#pragma once
#include "Player.h"
#include "Basket.h"

class ForBot : public Player , public Basket
{
public:
	int high = 0;
	int savehigh = 0;
	int low = 0;
	int savelow = 0;
	int zero = 0;
	void ActToWin(Player* p, Basket* b);
	void Init();
};