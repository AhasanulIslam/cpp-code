#include <iostream>
#define SIZE 10


using namespace std;
int circularqueue[SIZE];


int front=-1, rear=-1;
bool is_full()
{
    if ((front==0) && ((rear==SIZE-1)|| (front == rear + 1)))
    return true;
    else false;
}
bool is_empty()
{
    if(front == -1 && rear == -1)
    return true;
    else false;
}
void en_queue(int data)

{
    
    if(! is_full())
    {
        if(is_empty())
        {
            front = 0;
            rear = 0;
            circularqueue[rear] = data;
        }
        else if(rear==SIZE-1)
        {
            rear = 0;
            circularqueue[rear] = data;
        }
        else {
        rear++;
        circularqueue[rear] = data;
        }
        
    }
    else
        cout << "queue is full"  << endl;
}

int de_queue(int data)
{
    
    if(!is_empty())
    {
        if(front == rear)
        {
              data = circularqueue[front];
              rear = -1;
              front = -1;
        }
        else if (front == SIZE -1)
        {
            data = circularqueue[front];
            front = 0;
        }
        else
        {
            data = circularqueue[front];
            front++;
        }
        return data;
    }
    else
    {
        cout << "queue is empty" << endl;
        return 0;
    }
}
    int main (void)
    {
        int data;
        for(data = 0; data<10; data++)
        {
            cin >> data;
        }
       en_queue(data);
       cout << de_queue(data) << endl;
    }





