#include <iostream>
#include <stdlib.h>
using namespace std;

struct Player
{
	int selBasket = 0;
	int selRock = 0;
	int win = 0;
	const char* turn;
};

struct Basket
{
	int basketNum = 0;
	int* basket;
	int rockNum = 0;
	int total = 0;
};

void RemoveStones(Player* p, Basket* b)
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
		cin >> p->selBasket;
		cin >> p->selRock;
		p->win++;
	
		if (b->basket[p->selBasket - 1] >= p->selRock && p->selRock < b->total)
		{
			b->basket[p->selBasket - 1] -= p->selRock;
			b->total -= p->selRock;
			break;
		}
		else
			cout << "°ªÀÌ Àß¸øµÊ" << endl;
	}

	system("cls");
}

int main()
{
	Basket b;
	b.basketNum = 0;
	cin >> b.basketNum;

	b.basket = (int*)malloc(sizeof(int)*b.basketNum);
	b.rockNum = 0;

	for (int i = 0; i < b.basketNum; i++)
	{
		cin >> b.rockNum;
		b.basket[i] = b.rockNum;
	}

	Player p1;
	Player p2;

	p1.turn = "player1 turn";
	p2.turn = "player2 turn";

	for (int j = 0; j < b.basketNum; j++)
		b.total += b.basket[j];

	while (1)
	{
		RemoveStones(&p1, &b);

		if (b.total == 1)
			break;

		RemoveStones(&p2, &b);

		if (b.total == 1)
			break;
	}

	if (p1.win > p2.win)
		cout << "player1 win" << endl;
	else
		cout << "player2 win" << endl;

	return 0;
}