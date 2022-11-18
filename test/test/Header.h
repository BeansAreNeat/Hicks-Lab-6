#pragma once
#pragma once
#include <iostream>
#ifndef QUEUE_H
#define QUEUE_H

struct QNode
{
	string data;
	QNode* next;
};

typedef QNode* QNodePtr;

class Queue
{
private:
	QNodePtr front; // Points to head. Items are removed
	QNodePtr back; // Points to end node. Items are removed
	QNodePtr temp;
public:
	Queue()
	{
		front = NULL;
		back = NULL;
		temp = NULL;
	}

	Queue(const Queue& aQueue);
	~Queue() {	}
	void insert(string& val);
	char remove();
	void display();
};
#endif // QUEUE_H