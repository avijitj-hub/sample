#include<iostream>
#include<conio.h>

using namespace std;

class Queue
{
    int front = 0;
    int rear = 0;
    //int count = 0;
    int myQueue[5];

    public:
        void isEmpty()
        {
            if(front==rear)
            cout<<"Queue is empty"<<endl;
            else
            cout<<"Queue is not empty"<<endl;
        }

        void enqueue(int ele)
        {
            myQueue[rear] = ele;
            rear++;
            for(int i=0;i<rear;i++)
                cout<<myQueue[i]<<" ";
            cout<<endl;
        }

        void dequeue()
        {
            for(int i=0;i<rear;i++)
                myQueue[i] = myQueue[i+1];
            rear--;

            for(int i=0;i<rear;i++)
                cout<<myQueue[i]<<" ";
            cout<<endl;
        }
};

int main()
{
    Queue obj;

    obj.isEmpty();
    getch();

    obj.enqueue(2);
    getch();

    obj.isEmpty();
    getch();

    obj.enqueue(-3);
    getch();

    obj.isEmpty();
    getch();

    obj.enqueue(4);
    getch();

    obj.dequeue();
    getch();

    obj.isEmpty();
    getch();
}