#include "main.h"

void BotSelectsStones(Player* p, Basket* b)
{
	int tmp = 0;

	if (b->status == 0)
	{
		for (int j = 0; j < b->basketNum; j++)
		{
			if ((tmp = b->status ^ b->basket[j]) < b->basket[j])
			{
				p->selBasket = j;
				p->selStone = b->basket[j] - tmp;
				return;
			}
		}
	}
	else
	{
		for (int j = 0; j < b->basketNum; j++)
		{
			if (b->basket[j])
			{
				p->selBasket = j;
				p->selStone = 1;
				return;
			}
		}
	}
}