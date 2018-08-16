#include "main.h"

void PlayerTakesStones(Player* p, Basket* b)
{
	PrintGame(b);

	while (1)
	{
		SelectStones(p);

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