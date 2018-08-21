#include <stdlib.h>
#include "LinkedList.h"
#include "Score.h"

LinkedList::LinkedList()
{
	_head = new Node;
	_tail = new Node;

	_head->Next = _tail;
	_tail->Previous = _head;
}

LinkedList::~LinkedList()
{
	delete _head;
	delete _tail;
}

void LinkedList::Add(Score value)
{
	AddBack(value);
}

void LinkedList::AddFront(Score* score)
{
	Node* node = new Node;
	node->Value = *score;

	node->Previous = _head;
	node->Next = _head->Next;

	_head->Next->Previous = node;
	_head->Next = node;
}

void LinkedList::AddBack(Score value)
{
	Node* node = new Node;
	node->Value = value;

	node->Next = _tail;
	node->Previous = _tail->Previous;

	_tail->Previous->Next = node;
	_tail->Previous = node;
}

Score LinkedList::RemoveCore(Node* node)
{
	node->Previous->Next = node->Next;
	node->Next->Previous = node->Previous;

	Score value = node->Value;

	delete node;

	return value;
}

void LinkedList::Remove(Score value)
{
	Node* node = Find_Node(value);

	if (node == _tail)
		return;

	RemoveCore(node);
}

Score LinkedList::RemoveFront()
{
	Node* node = _head->Next;
	Score score = { 0, 0, 0 };
	if (node == _tail)
		return score;

	return RemoveCore(node);
}

Score LinkedList::RemoveBack()
{
	Node* node = _tail->Previous;
	Score score = { 0, 0, 0 };
	if (node == _head)
		return score;

	return RemoveCore(node);
}

void LinkedList::Iterate(void(*pf)(Score))
{
	Node* node = _head->Next;

	while (node != _tail)
	{
		pf(node->Value);

		node = node->Next;
	}
}

boolean LinkedList::Contains(Score value)
{
	Node* node = Find_Node(value);

	return node == _tail ? 0 : 1;
}

int LinkedList::Count()
{
	int count = 0;

	Node* node = _head->Next;

	while (node != _tail)
	{
		count++;

		node = node->Next;
	}

	return count;
}

int LinkedList::Count(boolean(*fp)(Score))
{
	int count = 0;

	Node* node = _head->Next;

	while (node != _tail)
	{
		if (fp(node->Value) == 1)
			count++;

		node = node->Next;
	}

	return count;
}

Node* LinkedList::Find_Node(Score value)
{
	Node* current = _head->Next;

	while (current != _tail)
	{
		if (current->Value.Eng == value.Eng)
			return current;

		current = current->Next;
	}

	return _tail;
}