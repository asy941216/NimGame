#include "main.h"

void PlayerTakesStones(Player* p, Basket* b)
{
	PrintGame(b);

	while (1)
	{
		SelectStones(p);

		if (p->selBasket <= b->basketNum && p->selBasket > 0 && b->basket[p->selBasket - 1] >= p->selStone && p->selStone < b->total && p->selStone > 0)
		{
			b->status = b->status ^ (b->basket[p->selBasket - 1] ^ (b->basket[p->selBasket - 1] - p->selStone));
			b->basket[p->selBasket - 1] -= p->selStone;
			b->total -= p->selStone;
			break;
		}
		else
			cout << "°ªÀÌ Àß¸øµÊ" << endl;
	}

	system("cls");
}