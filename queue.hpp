#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue
{
private:
    int front, rear, size;
    int* queue;
public:
    Queue(int capacity);
    void enqueue(int item);
    void dequeue();
    bool isEmpty();
    bool isFull();
    int frontElement();
    ~Queue();
};



#endif // QUEUE_HPP