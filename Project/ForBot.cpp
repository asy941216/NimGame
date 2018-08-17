#include "main.h"

void ForBot::ActToWin(Player* p, Basket* b)
{
	for (int i = 0; i < b->basketNum; i++)
	{
		if (b->basket[i] >= 2)
		{
			high++;
			savehigh = i;
		}
		else if (b->basket[i] == 1)
		{
			low++;
			savelow = i;
		}
		else if (b->basket[i] == 0)
			zero++;
	}


	if (high == 1 && low % 2 == 1)
	{
		p->selBasket = savehigh + 1;
		p->selStone = b->basket[savehigh];
		return;
	}

	else if (high == 1 && low % 2 == 0)
	{
		p->selBasket = savehigh + 1;
		p->selStone = b->basket[savehigh] - 1;
		return;
	}

	else if (high == 0 && low == 2)
	{
		p->selBasket = savelow + 1;
		p->selStone = b->basket[savelow];
		return;
	}
}

void ForBot::Init()
{
	high = 0;
	savehigh = 0;
	low = 0;
	savelow = 0;
	zero = 0;
}