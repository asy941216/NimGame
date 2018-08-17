#include "main.h"
#include <Windows.h>
int main()
{
	Basket b;
	Player p1, p2;

	int mode = 0;
	cout << "모드 선택: 1. Player VS Player  2. Player VS Bot" << endl;
	cin >> mode;

	int roundNumber = 0;
	cout << "라운드 수 : ";
	cin >> roundNumber;
	cout << endl;

	system("cls");

	while (!(roundNumber == 0 || p1.win > p2.win + roundNumber || p2.win > p1.win + roundNumber))
	{
		b.status = 0;
		SetGame(&b);
		if (mode == 1)
		{
			cout << "남은 라운드 수 : " << roundNumber << endl << "Player1 : Player2" << endl << p1.win << " : " << p2.win << endl;
			Sleep(2000);
			PlayWithPlayer(&p1, &p2, &b);
		}
		else if (mode == 2)
		{
			cout << "남은 라운드 수 : " << roundNumber << endl << "Player : Bot" << endl << p1.win << " : " << p2.win << endl;
			Sleep(2000);
			PlayWithBot(&p1, &p2, &b);
		}
		roundNumber--;
	}

	PrintWinner(&p1, &p2, mode, &b);

	return 0;
}