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
		cout << "�ڽ��� ��ȣ : ";
		cin >> p->selBasket;
		cout << endl << "������ ���� ���� : ";
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
			cout << "���� �߸���" << endl;
	}

	system("cls");
}