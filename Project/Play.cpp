#include "main.h"

void Play(Player* p1, Player* p2, Basket* b)
{
	system("cls");
	while (1)
	{
		TakeStones(p1, b);

		if (b->total == 1)
			break;

		TakeStones(p2, b);

		if (b->total == 1)
			break;
	}
}