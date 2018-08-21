#include <stdlib.h>
#include "ListStack.h"
#include "LinkedList.h"
#include "Score.h"

ListStack::ListStack()
{
	_list = new LinkedList();
	_count = 0;
}

ListStack::~ListStack()
{
	delete _list;
}

void ListStack::Push(Score score)
{
	_count++;
	_list->AddFront(&score);
}

Score ListStack::Pop()
{
	_count--;
	return _list->RemoveFront();
}

int ListStack::Count()
{
	return _list->Count();
}
