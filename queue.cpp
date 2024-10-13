#include "queue.hpp"
#include <iostream>

Queue::Queue(int capacity)
{
    front = -1;
    rear = -1;
    size = capacity;
    queue = new int[size];
}

bool Queue::isEmpty()
{
    return front == -1;
}

bool Queue::isFull()
{
    return rear == size - 1;
}

void Queue::enqueue(int item)
{
    if (isFull())
    {
        std::cout << "Queue is full\n";
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    queue[++rear] = item;
    std::cout << item << " enqueued to queue\n"; 
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        std::cout << "Queue is empty\n";
        return;
    }
    std::cout << queue[front] << " dequeued\n";
    front++;
    if (front > rear)
    {
        front=-1;
        rear = -1;
    }
}
int Queue::frontElement()
{
    if (isEmpty())
    {
        std::cout << "Queue is empty\n";
        return -1;
    }
    return queue[front];
}

Queue::~Queue()
{
    delete[] queue;
}  