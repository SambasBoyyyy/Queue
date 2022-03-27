#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
const int MAX_ITEMS = 30;
class FullQueue
{

};

class EmptyQueue
{

};




template<class T >

class QueueType
{

private :

    T data[MAX_ITEMS];
    int front,rear;

public :

    QueueType();
    void makeEmpty();
    bool isEmpty();
    bool isFull();
    void enque(T);
    void deque();
    T  Front();


};

#endif // QUEUE_H_INCLUDED
