#include "main.h"

void PrintGame(Basket* b)
{
	for (int i = 0; i < b->basketNum; i++)
	{
		for (int j = 0; j < b->basket[i]; j++)
			cout << "* ";

		cout << endl << "------------------------------------------" << endl;
	}
}