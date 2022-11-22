#pragma once
#include <iostream>
using namespace std;

struct Node {
	string data;
	Node* link;
};

typedef Node* NodePtr;

class Queue {
private:
	NodePtr front = NULL; // Points to head. Items are removed
	NodePtr rear = NULL;  // Points to end node. Items are removed
public:
	Queue() { }
	~Queue() {	}

	void insert(string val) {
		Node* ptr = new Node();
		ptr->data = val;
		ptr->link = NULL;

		if (front == NULL) {
			front = ptr;
			rear = ptr;
		}
		else {
			rear->link = ptr;
			rear = ptr;
		}
	}

	void remove() {
		if (isEmpty())
			cout << "Queue is empty\n";
		else
			//only one element/node in queue.
			if (front == rear) {
				free(front);
				front = rear = NULL;
			}
			else {
				Node* ptr = front;
				front = front->link;
				free(ptr);
			}
	}

	//function to show the element at front
	void showfront() {
		if (isEmpty())
			return;
		else
			return front->data;
	}

	string back() {
		if (isEmpty())
			return;
		else
			return rear->data;
	}

	void display() {
		if (isEmpty())
			cout << "Queue is empty\n";
		else {
			Node* ptr = front;
			while (ptr != NULL) {
				cout << ptr->data << " ";
				ptr = ptr->link;
			}
		}
	}

	bool isEmpty() {
		if (front == NULL && rear == NULL)
			return true;
		else
			return false;
	}
};