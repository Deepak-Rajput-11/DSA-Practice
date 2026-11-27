#include <iostream>
using namespace std;

void enqueue(int arr[], int &rear, int value, int size)
{
    if (rear == size - 1)
    {
        cout << "Queue is full!";
        return;
    }

    rear++;
    arr[rear] = value;
}

void dequeue(int arr[], int &front, int &rear)
{
    if (front > rear)
    {
        cout << "Queue is empty!";
        return;
    }
    cout << arr[front] << endl;
    front++;
}

void peek(int arr[], int front, int rear)
{

    if (front > rear)
    {
        cout << "Queue is empty!";
        return;
    }

    cout << arr[front] << endl;
}

bool isEmpty(int front, int rear)
{
    return front > rear;
}

int main()
{

    int size = 5;
    int arr[size];
    int front = 0;
    int rear = -1;

    enqueue(arr, rear, 10, size);
    enqueue(arr, rear, 20, size);
    enqueue(arr, rear, 30, size);

    dequeue(arr, front, rear);
    dequeue(arr, front, rear);

    peek(arr, front, rear);

    if (isEmpty(front, rear))
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue is not empty!" << endl;
    }
    return 0;
}