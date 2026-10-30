#include <iostream>
using namespace std;
int main()
{

    struct node
    {
        int data;
        node *next;
        node *prev;
    };

    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    head->prev = nullptr;
    fourth->next = nullptr;

    node *temp = head;
    node *tail = fourth;
    temp = third;
    if (temp == head && temp == tail)
    {
        head = nullptr;
        tail = nullptr;
        delete temp;
    }
    else if (temp == head)
    {
        head = temp->next;
        head->prev = nullptr;
        delete temp;
    }
    else if (temp == tail)
    {
        temp->prev->next = nullptr;
        tail = temp->prev;
        delete temp;
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    node *temp1 = tail;

    while (temp1 != nullptr)
    {
        cout << temp1->data << " ";
        temp1 = temp1->prev;
    }

    return 0;
}