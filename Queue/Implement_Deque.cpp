#include <iostream>
using namespace std;

void insertFront(int arr[], int &front, int &rear, int size, int value)
{
    if ((rear + 1) % size == front)
    {
        cout << "Queue is full" << endl;
        return;
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        arr[front] = value;
    }
    else
    {
        front = (front - 1 + size) % size;
        arr[front] = value;
    }
}

void insertRear(int arr[], int &front, int &rear, int size, int value)
{
    if ((rear + 1) % size == front)
    {
        cout << "Queue is full" << endl;
        return;
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        arr[front] = value;
    }
    else
    {
        rear = (rear + 1) % size;
        arr[rear] = value;
    }
}

void deleteFront(int arr[], int &front, int &rear, int size)
{
    if (front == -1)
    {
        cout << "Deque is empty" << endl;
        return;
    }
    else if (front == rear)
    {
        cout << arr[front] << " ";
        front = -1;
        rear = -1;
    }
    else
    {
        cout << arr[front] << " ";
        front = (front + 1) % size;
    }
}

void deleteRear(int arr[], int &front, int &rear, int size)
{
    if (front == -1)
    {
        cout << "Deque is empty" << endl;
        return;
    }
    else if (front == rear)
    {
        cout << arr[rear] << " ";
        front = -1;
        rear = -1;
    }
    else
    {
        cout << arr[rear] << " ";
        rear = (rear - 1 + size) % size;
    }
}

void peekFront(int arr[], int front)
{
    if (front == -1)
    {
        cout << "Deque is empty" << endl;
        return;
    }
    cout << arr[front] << endl;
}

void peekRear(int arr[], int rear, int front)
{
    if (front == -1)
    {
        cout << "Deque is empty" << endl;
        return;
    }
    cout << arr[rear] << endl;
}

void display(int arr[], int front, int rear, int size)
{
    if (front == -1)
    {
        cout << "Deque is empty" << endl;
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

    insertRear(arr, front, rear, size, 10);
    insertRear(arr, front, rear, size, 20);
    insertRear(arr, front, rear, size, 30);

    insertFront(arr, front, rear, size, 5);

    display(arr, front, rear, size);

    deleteFront(arr, front, rear, size);
    deleteRear(arr, front, rear, size);

    cout << endl;
    display(arr, front, rear, size);

    insertFront(arr, front, rear, size, 40);
    insertRear(arr, front, rear, size, 50);

    display(arr, front, rear, size);

    cout << "Front: ";
    peekFront(arr, front);

    cout << "Rear: ";
    peekRear(arr, rear, front);

    cout << "Is Empty: " << isEmpty(front) << endl;
    cout << "Is Full: " << isFull(front, rear, size) << endl;

    return 0;
}