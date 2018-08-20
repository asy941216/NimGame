#include "main.h"

void BotSelectsStones(Player* p, Basket* b)
{
	int tmp = 0;

	ForBot bot;

///////////////////////////////////////////////////////////////////// Bot이 한 수로 게임을 끝낼 수 있을 때의 행동 
	bot.Init();
	while (1)
	{
		if (bot.ActToWin(p, b))
			return;
		else
			break;
	}
///////////////////////////////////////////////////////////////////////// Bot이 게임을 유리하게 이끌기 위한 행동 
	BotPlay(p, b);
}