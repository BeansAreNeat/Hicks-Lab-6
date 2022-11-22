#include <iostream>
#include "6_3.h"
using namespace std;

void cqueue::enQueue(int x)
{
	if (full())
	{
		cout << "Queue if full, exit code 1" << endl;
		exit(1);
	}
	else
	{
		rear = (rear + 1) % MAX_Q;
		q[rear] = x;
	}
}

int cqueue::deQueue()
{
	if (empty())
	{
		cout << "Queue is empty, exit code 2" << endl;
		exit(2);
	}
	else
	{
		front = (front + 1) % MAX_Q;
		return q[front];
	}
}

void cqueue::displayQueue()
{

}

int cqueue::empty()
{
	return (front == rear);
}

int cqueue::full()
{
	return (front == ((rear + 1) % MAX_Q));
}

void cqueue::makeEmpty()
{
	front = 0;
	rear = 0;
}