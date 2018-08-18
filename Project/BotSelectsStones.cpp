#include "main.h"

void BotSelectsStones(Player* p, Basket* b)
{
	int tmp = 0;

	ForBot bot;

///////////////////////////////////////////////////////////////////// Bot이 한 수로 게임을 끝낼 수 있을 때의 행동 
	bot.Init();
	while (1)
	{
		if (bot.ActToWin(p, b))
			return;
		else
			break;
	}
///////////////////////////////////////////////////////////////////////// Bot이 게임을 유리하게 이끌기 위한 행동 
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
		for (int j = 0; j < b->basketNum; j++)
		{
			if (b->basket[j])
			{
				p->selBasket = j + 1;
				p->selStone = b->basket[j] - 1;
				return;
			}
		}
	}
}