#include "main.h"

int ActToWin(Player* p, Basket* b, int high, int savehigh, int low, int savelow)
{
	if ((high == 1 && low == 2) || (high == 1 && low == 0))
	{
		p->selBasket = savehigh + 1;
		p->selStone = b->basket[savehigh] - 1;
		return 1;
	}

	else if (high == 1 && low == 1)
	{
		p->selBasket = savehigh + 1;
		p->selStone = b->basket[savehigh];
		return 1;
	}

	else if (high == 0 && low == 2)
	{
		p->selBasket = savelow + 1;
		p->selStone = b->basket[savelow];
		return 1;
	}

	return 0;
}