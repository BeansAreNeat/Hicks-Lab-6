#pragma once
#define MAX_Q 5

class cqueue
{
public:
    // Initialize front and rear
    int rear, front = 0;
    int 
    // Circular Queue
    int size;
    int* arr;

    cqueue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }
    void enQueue(int value);
    int deQueue();
    void displayQueue();
    int empty();
    int full();
    void makeEmpty();
};