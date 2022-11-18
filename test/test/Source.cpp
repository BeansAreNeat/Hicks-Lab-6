#include "Header.h"
#include <iostream>
using namespace std;

Queue::Queue(const Queue& aQueue)
{

}

void Queue::insert(string& val)
{
    // Dynamicall makes new node
    QNode* newnode = new QNode();
    // The new node, points to the data
    newnode->data = val;

    newnode->next = front;

    if (front == NULL) {
        front = newnode;
        back = newnode;
    }
    else {
        back->next = newnode;
        back = newnode;
    }
}

char Queue::remove()
{
    temp = front;
    if (front == NULL)
    {
        cout << "Empty" << endl;
        exit(1);
    }
    else if (temp->next != NULL) // If the Queue has more than one element
    {
        temp = temp->next; // Move the temp value one step ahead
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front); // Delete and reasign the front value
        front = temp;
    }
    else // If the queue has ONLY one element
    {
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);   // Completely empties the queue
        front = NULL;
        back = NULL;
    }
}

void Queue::display()
{
    temp = front;
    while (temp != NULL) // (temp!= rear->next)
    {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}