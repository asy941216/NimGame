#include "main.h"
void TakeStones(Player* p, Basket* b);
void SetGame(Basket* b);
void Play(Player* p1, Player* p2, Basket* b);
void PrintWinner(Player* p1, Player* p2);

int main()
{
	Basket b;
	Player p1, p2;

	SetGame(&b);

	Play(&p1, &p2, &b);
	PrintWinner(&p1, &p2);

	return 0;
}