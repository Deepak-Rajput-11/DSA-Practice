#include <iostream>
using namespace std;
int main()
{

    struct node
    {
        int data;
        node *next;
    };

    node *head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";

    node *last = new node;
    last->data = 40;
    last->next = nullptr;

    temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = last;

    node *ness = head;

    while (ness != nullptr)
    {
        cout << ness->data << " ";
        ness = ness->next;
    }

    return 0;
}