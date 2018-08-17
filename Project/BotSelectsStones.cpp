#include "main.h"

void BotSelectsStones(Player* p, Basket* b)
{
	int tmp = 0;

	int high = 0;
	int savehigh = 0;
	int low = 0;
	int savelow = 0;
	int zero = 0;

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

	if (high == 1 && low%2 == 1)
	{
		p->selBasket = savehigh + 1;
		p->selStone = b->basket[savehigh];
		return;
	}

	else if (high == 1 && low%2 == 0)
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

	if (b->status != 0)
	{
		for (int i = 0; i < b->basketNum; i++)
		{
			
			if ((tmp = b->status ^ b->basket[i]) < b->basket[i])
			{
				p->selBasket = i + 1;
				if (b->total > 4)
					p->selStone = b->basket[i] - tmp;
				else
					p->selStone = b->basket[i];
				return;
			}
		}
	}

	else
	{
		for (int k = 0; k < b->basketNum; k++)
		{
			if (b->basket[k])
			{
				p->selBasket = k + 1;
				p->selStone = b->basket[k] - 1;
				return;
			}
		}
	}
}