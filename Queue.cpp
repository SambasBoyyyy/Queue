#include<iostream>
#include "queue.h"

using namespace std;

template<class T>

QueueType<T>::QueueType()
{
    front = -1 ;
    rear = -1;
}

template<class T>

void QueueType<T>::makeEmpty()
{
    rear=-1;
    front = -1;
}

template<class T>

bool QueueType<T>::isEmpty()
{
     return (rear == -1 && front == -1);
}

template<class T>

bool QueueType<T>::isFull()
{
    return (front == (rear+1)%MAX_ITEMS);
}

template<class T>

void QueueType<T>::enque(T item)
{
    try
    {
        if(isFull())
        {
            throw FullQueue();
        }
        else{

         if (isEmpty())
    {
        rear = 0;
        front = 0;
    }
    else{
        rear = (rear +1)%MAX_ITEMS;
    }

    data[rear] = item;
        }
    }
    catch(FullQueue e)
    {
       cout<<"The Queue is Full";
    }

}

template<class T>

void QueueType<T>::deque()
{
   try
    {
        if(isEmpty())
        {
            throw EmptyQueue();
        }
        else{

         if (rear == front)
    {
        rear = -1;
        front = -1;
    }

    else{

        front = (front +1)%MAX_ITEMS;
    }


        }
    }
    catch(EmptyQueue e)
    {
        cout<<"The Queue is Empty";
    }
}

template<class T>

T QueueType<T>::Front()
{
    return data[front];
}
