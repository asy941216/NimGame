#include "main.h"

void BotPlay(Player* p, Basket* b)
{
	int tmp = 0;

	if (b->status != 0)
		for (int i = 0; i < b->basketNum; i++)
			if ((tmp = b->status ^ b->basket[i]) < b->basket[i])
			{
				p->selBasket = i + 1;
				if (b->total > 4)
					p->selStone = b->basket[i] - tmp;
				else
					p->selStone = b->basket[i];
				return;
			}

	else
		for (int j = 0; j < b->basketNum; j++)
			if (b->basket[j])
			{
				p->selBasket = j + 1;

				if (b->basket[j] != 1)
					p->selStone = b->basket[j] - 1;

				else
					p->selStone = b->basket[j];
				return;
			}
}