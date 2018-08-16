#include "main.h"

void TakeStones(Player* p, Basket* b)
{
	for (int i = 0; i < b->basketNum; i++)
	{
		for (int j = 0; j < b->basket[i]; j++)
			cout << "* ";

		cout << endl << "------------------------------------------" << endl;
	}

	while (1)
	{
		cout << p->turn << endl;
		cout << "박스의 번호 : ";
		cin >> p->selBasket;
		cout << endl << "가져갈 돌의 갯수 : ";
		cin >> p->selRock;
		cout << endl;

		p->win++;

		if (b->basket[p->selBasket - 1] >= p->selRock && p->selRock < b->total)
		{
			b->basket[p->selBasket - 1] -= p->selRock;
			b->total -= p->selRock;
			break;
		}
		else
			cout << "값이 잘못됨" << endl;
	}

	system("cls");
}