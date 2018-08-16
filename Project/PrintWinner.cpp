#include "main.h"

void PrintWinner(Player* p1, Player* p2)
{
	if (p1->win > p2->win)
		cout << "player1 win" << endl;
	else
		cout << "player2 win" << endl;
}