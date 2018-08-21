#pragma once
#include "Score.h"
typedef int boolean;

struct Node
{
	Score Value;
	Node* Previous;
	Node* Next;
};

class LinkedList
{
private:
	Node* _head;
	Node* _tail;
	Score RemoveCore(Node* node);
	Node* Find_Node(Score value);

public:
	LinkedList();
	~LinkedList();
	void Add(Score value);
	void AddFront(Score* score);
	void AddBack(Score value);
	void Iterate(void(*pf)(Score));
	void Remove(Score value);
	Score RemoveFront();
	Score RemoveBack();
	boolean Contains(Score value);
	int Count();
	int Count(boolean(*fp)(Score));
} ;

