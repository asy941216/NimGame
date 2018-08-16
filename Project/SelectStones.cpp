#include "main.h"

void SelectStones(Player* p)
{
	cout << p->turn << endl << "박스의 번호 : ";
	cin >> p->selBasket;
	cout << endl << "가져갈 돌의 갯수 : ";
	cin >> p->selStone;
	cout << endl;

	p->temp++;
}