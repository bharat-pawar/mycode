// treeBasics.cpp : Defines the entry point for the console application.
//

//		------------------------
//queue - <-1|2|3|4|5|6|7|.....<-
//		------------------------

#include "stdafx.h"
#include <list>
#include <iostream>
using namespace std;

struct tree
{
	int val;
	struct node * left;
	struct node * right;
};

void insertNode(struct tree node*)
{

}

int _tmain(int argc, _TCHAR* argv[])
{

	list<int> queue;
	queue.push_back(1);
	queue.push_back(2);
	queue.push_back(3);
	queue.push_back(4);
	queue.push_back(5);
	queue.push_back(6);

	queue.pop_front();

	

	return 0;
}

