#include "main.h"

void BotSelectsStones(Player* p, Basket* b)
{
	int tmp = 0;
	
	if (b->status != 0)
	{
		for (int i = 0; i < b->basketNum; i++)
		{
			
			if ((tmp = b->status ^ b->basket[i]) < b->basket[i])
			{
				p->selBasket = i + 1;
				p->selStone = b->basket[i] - tmp;
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
				p->selStone = 1;
				return;
			}
		}
	}
}