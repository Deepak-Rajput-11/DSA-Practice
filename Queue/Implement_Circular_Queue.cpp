#include <iostream>
using namespace std;

void enqueue(int arr[], int &front, int &rear, int size, int value)
{
    if (front == -1)
    {
        front = 0;
        rear = 0;
        arr[rear] = value;
    }
    else if ((rear + 1) % size == front)
    {
        cout << "Circular Queue is full" << endl;
        return;
    }

    else
    {
        rear = (rear + 1) % size;
        arr[rear] = value;
    }
}

void dequeue(int arr[], int &front, int &rear, int size)
{
    if (front == -1)
    {
        cout << "Queue is empty";
        return;
    }

    if (front == rear)
    {
        cout << arr[front] << endl;
        front = -1;
        rear = -1;
        return;
    }

    cout << arr[front] << endl;
    front = (front + 1) % size;
}

void display(int arr[], int front, int rear, int size)
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    int i = front;

    while (true)
    {

        cout << arr[i] << " ";

        if (i == rear)
        {
            break;
        }

        i = (i + 1) % size;
    }
    cout << endl;
}

void peek(int arr[], int front)
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << arr[front] << endl;
}

bool isEmpty(int front)
{
    return front == -1;
}

bool isFull(int front, int rear, int size)
{
    return (rear + 1) % size == front;
}

int main()
{
    int size = 5;
    int arr[size];

    int front = -1;
    int rear = -1;

    enqueue(arr, front, rear, size, 10);
    enqueue(arr, front, rear, size, 20);
    enqueue(arr, front, rear, size, 30);
    enqueue(arr, front, rear, size, 40);
    enqueue(arr, front, rear, size, 50);
    enqueue(arr, front, rear, size, 60);

    display(arr, front, rear, size);

    dequeue(arr, front, rear, size);
    dequeue(arr, front, rear, size);

    display(arr, front, rear, size);

    enqueue(arr, front, rear, size, 60);
    enqueue(arr, front, rear, size, 70);

    display(arr, front, rear, size);

    cout << "Front element: ";
    peek(arr, front);

    cout << "Is empty? " << isEmpty(front) << endl;
    cout << "Is full? " << isFull(front, rear, size) << endl;
    return 0;
}