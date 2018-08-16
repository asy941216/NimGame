#include "main.h"

int main()
{
	Basket b;
	Player p1, p2;

	int roundNumber = 0;
	cout << "라운드 수 : ";
	cin >> roundNumber;
	cout << endl;

	while (!(roundNumber == 0 || p1.win > roundNumber || p2.win > roundNumber))
	{
		cout << "남은 라운드 수 : " << roundNumber << endl << "Player1 : Player2" << endl << p1.win << " : " << p2.win << endl;
		SetGame(&b);

		PlayWithPlayer(&p1, &p2, &b);

		roundNumber--;
	}
		PrintWinner(&p1, &p2);
	return 0;
}