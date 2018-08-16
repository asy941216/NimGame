#include "main.h"

void BotSelectsStones(Player* p, Basket* b)
{
	int tmp = 0;

	if(b->status == 0)
	{
		for (int j = 0; j < b->basketNum; j++)
		{
			if ((tmp = b->status ^ b->basket[j]) < b->basket[j])
			{
				p->selBasket = j + 1;
				p->selStone = b->basket[j] - tmp;
				return;
			}
		}
	}
	else
	{
		for (int i = 0; i < b->basketNum; i++)
		{
			if (b->basket[i])
			{
				p->selBasket = i + 1;
				p->selStone = 1;
				return;
			}
		}
	}
	
}