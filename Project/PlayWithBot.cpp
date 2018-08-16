#include "main.h"

void PlayWithBot(Player* p1, Player* p2, Basket* b)
{
	p1->turn = "Player1 Turn";
	p2->turn = "Bot Turn";

	system("cls");
	while (1)
	{
		PlayerTakesStones(p1, b);
		if (b->total == 1)
		{
			p1->win++;
			break;
		}

		BotTakesStones(p2, b);
		if (b->total == 1)
		{
			p2->win++;
			break;
		}
	}
}