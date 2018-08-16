#include "main.h"

void SetGame(Basket* b)
{
	cout << "박스 갯수 : ";
	cin >> b->basketNum;
	
	b->basket = (int*)malloc(sizeof(int)*b->basketNum);

	for (int i = 0; i < b->basketNum; i++)
	{
		cout << endl << i + 1 << "번째 박스에 넣을 돌의 갯수 : ";
		cin >> b->rockNum;
		b->basket[i] = b->rockNum;
	}

	cout << endl;

	b->total = 0;
	for (int j = 0; j < b->basketNum; j++)
		b->total += b->basket[j];
}