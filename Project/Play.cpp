#include "main.h"

void Play(Player* p1, Player* p2, Basket* b)
{
	p1->turn = "Player1 Turn";
	p2->turn = "Player2 Turn";

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