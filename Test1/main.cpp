#include <iostream>
#include <stdlib.h>
#include "LinkedList.h"
#include "ListStack.h"
#include "Score.h"
using namespace std;

void TestListStack2()
{
	ListStack* stack = new ListStack;

	Score s1 = { 1, 1, 1 };
	stack->Push(s1);

	Score s2 = { 2, 2, 2 };
	stack->Push(s2);

	Score s3 = { 3, 3, 3 };
	stack->Push(s3);

	Score s4 = { 4, 4, 4 };
	stack->Push(s4);

	printf("count : %d\n", stack->Count());

	printf("pop : %d\n", stack->Pop().Eng);
	printf("pop : %d\n", stack->Pop().Eng);
	printf("pop : %d\n", stack->Pop().Eng);
	printf("pop : %d\n", stack->Pop().Eng);

	delete stack;
}

int main()
{
	TestListStack2();

	return 0;
}