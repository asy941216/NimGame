#pragma once
#include "LinkedList.h"

class ListStack
{
private:
	LinkedList * _list;
	int _count;

public:
	ListStack();
	~ListStack();
	void Push(Score score);
	Score Pop();
	int Count();
};