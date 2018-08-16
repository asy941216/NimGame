#include "main.h"

void BotTakesStones(Player* p, Basket* b)
{
	PrintGame(b);

	while (1)
	{
		BotSelectsStones(p, b);

		if (b->basket[p->selBasket - 1] >= p->selStone && p->selStone < b->total)
		{
			b->basket[p->selBasket - 1] -= p->selStone;
			b->total -= p->selStone;
			break;
		}
		else
			cout << "°ªÀÌ Àß¸øµÊ" << endl;
	}

	system("cls");
}