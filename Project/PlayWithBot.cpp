#include "main.h"

void PlayWithBot(Player* p1, Player* p2, Basket* b)
{
	p1->turn = "Player1 Turn";
	p2->turn = "Bot Turn";

	while (1)
	{		
		BotTakesStones(p2, b);
		if (b->total == 1)
		{
			cout << "Bot�� " << p2->selBasket << "��° �ٱ��Ͽ��� " << p2->selStone << "���� ���� ������" << endl;
			PrintGame(b);
			Sleep(2000);
			cout << endl << "Bot : You Cannot Beat Me!!!" << endl << endl;
			p2->win++;
			break;
		}

		cout << "Bot�� " << p2->selBasket << "��° �ٱ��Ͽ��� " << p2->selStone << "���� ���� ������" << endl;

		PlayerTakesStones(p1, b);
		if (b->total == 1)
		{
			p1->win++;
			break;
		}
	}
}