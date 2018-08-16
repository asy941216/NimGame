#include "main.h"

void BotTakesStones(Player* p, Basket* b)
{
	BotSelectsStones(p, b);

	b->status = b->status ^ (b->basket[p->selBasket - 1] ^ (b->basket[p->selBasket - 1] - p->selStone));
	b->basket[p->selBasket - 1] -= p->selStone;
	b->total -= p->selStone;

	system("cls");
}