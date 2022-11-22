#include <iostream>
#include "6_3.h"
using namespace std;

int main()
{
	Queue q(5);

	// Inserting elements in Circular Queue
	q.enQueue(10);
	q.enQueue(20);
	q.enQueue(30);
	q.enQueue(40);

	// Display elements present in Circular Queue
	q.displayQueue();

	// Deleting elements from Circular Queue
	cout << "\nDeleted value = " << q.deQueue();
	cout << "\nDeleted value = " << q.deQueue();

	q.displayQueue();

	q.enQueue(50);
	q.enQueue(60);
	q.enQueue(70);

	q.displayQueue();

	return 0;

}