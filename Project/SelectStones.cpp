#include "main.h"

void SelectStones(Player* p)
{
	cout << p->turn << endl << "�ڽ��� ��ȣ : ";
	cin >> p->selBasket;
	cout << endl << "������ ���� ���� : ";
	cin >> p->selStone;
	cout << endl;

	p->temp++;
}