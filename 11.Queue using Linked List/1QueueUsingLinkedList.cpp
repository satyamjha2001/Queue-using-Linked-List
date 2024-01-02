#include <iostream>
using namespace std;
struct node
{
    int item;
    node *next;
    node(int data)
    {
        item = data;
        next = NULL;
    }
};
class Queue
{
private:
    node *front, *rear;

public:
    Queue();
    void insertRear(int);
    int getRear();
    int getFront();
    void deleteFront();
    ~Queue();
    int Queue::count();
};
Queue::Queue()
{
    front = rear = NULL;
}
void Queue::insertRear(int data)
{
    node *n = new node(data);
    if (rear == NULL)
    {
        front = rear = n;
    }
    else
    {
        rear->next = n;
        rear = n;
    }
}
int Queue::getRear()
{
    if (rear == NULL)
        throw 1;
    return rear->item;
}
int Queue::getFront()
{
    if (front = NULL)
        throw 1;
    return front->item;
}
void Queue::deleteFront()
{
    node *temp;
    if (front)
    {
        if (front = rear)
        {
            delete front;
            front = rear = NULL;
        }
        else
        {
            temp = front;
            front = front->next;
            delete temp;
        }
    }
}
Queue::~Queue()
{
    while(front)
        deleteFront();
}
int Queue::count()
{
    int c=0;
    node *temp;
    if(front==NULL)
        return 0;
    temp=front;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
int main()
{

    return 0;
}