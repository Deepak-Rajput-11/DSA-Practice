
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void enqueue(node *&front, node *&rear, int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue(node *&front, node *&rear)
{
    if (front == NULL)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << front->data << endl;
    node *temp = front;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    delete temp;
}

void peek(node *front)
{
    if (front == NULL)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << front->data << endl;
}

bool isEmpty(node *front)
{
    return front == NULL;
}

int main()
{
    node *front = NULL;
    node *rear = NULL;

    enqueue(front, rear, 10);
    enqueue(front, rear, 20);
    enqueue(front, rear, 30);

    dequeue(front, rear);

    peek(front);

    if (isEmpty(front))
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue is not empty!" << endl;
    }

    return 0;
}
