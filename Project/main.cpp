#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int basket[3] = { 3,5,7 };

	int player1a = 0;
	int player1b = 0;

	int player2a = 0;
	int player2b = 0;

	int win = 0;

	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < basket[i]; j++)
				cout << "* ";

			cout << endl << "------------------------------------------" << endl;
		}

		cout << "player1 turn" << endl;
		cin >> player1a;
		cin >> player1b;
		win = win++;
		if (basket[player1a - 1] >= player1b)
			basket[player1a - 1] -= player1b;

		system("cls");

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < basket[i]; j++)
				cout << "* ";

			cout << endl << "------------------------------------------" << endl;
		}

		cout << "player2 turn" << endl;
		cin >> player2a;
		cin >> player2b;
		win = win--;
		if (basket[player2a - 1] >= player2b)
			basket[player2a - 1] -= player2b;

		system("cls");

		if (basket[0] + basket[1] + basket[2] == 1)
			break;
	}

	if (win > 0)
		cout << "player1 win" << endl;
	else
		cout << "player2 win" << endl;

	return 0;
}