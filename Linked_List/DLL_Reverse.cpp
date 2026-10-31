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

    while (temp != nullptr)
    {
        node *currentNext = temp->next;
        temp->next = temp->prev;
        temp->prev = currentNext;

        temp = currentNext;
    }

    node *oldnode = head;
    head = tail;
    tail = oldnode;

    node *temp1 = head;
    while (temp1 != nullptr)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;

    node *temp2 = tail;

    while (temp2 != nullptr)
    {
        cout << temp2->data << " ";
        temp2 = temp2->prev;
    }
    return 0;
}