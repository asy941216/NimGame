#include "main.h"

void PrintWinner(Player* p1, Player* p2, int mode)
{
	if (mode == 1)
	{
		if (p1->win > p2->win)
			cout << "player1 win" << endl;
		else
			cout << "player2 win" << endl;
	}

	if (mode == 2)
	{
		if (p1->win > p2->win)
			cout << "player win" << endl;
		else
			cout << "Bot win" << endl;
	}
}
