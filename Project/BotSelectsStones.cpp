#include "main.h"

void BotSelectsStones(Player* p, Basket* b)
{
	int tmp = 0;

	ForBot bot;

///////////////////////////////////////////////////////////////////// Bot�� �� ���� ������ ���� �� ���� ���� �ൿ 
	bot.Init();
	while (1)
	{
		if (bot.ActToWin(p, b))
			return;
		else
			break;
	}
///////////////////////////////////////////////////////////////////////// Bot�� ������ �����ϰ� �̲��� ���� �ൿ 
	BotPlay(p, b);
}