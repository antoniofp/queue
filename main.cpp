#include <iostream>
#include "queue.hpp"


int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.enqueue(40);
    std::cout << "Front element is: " << q.frontElement() << std::endl;

    return 0;
}