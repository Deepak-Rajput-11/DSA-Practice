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
    node *fourth = new node;
    node *fifth = new node;

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    int n = 5;
    node dummy;
    dummy.next = head;

    node *first = &dummy;
    node *sec = &dummy;

    for (int i = 0; i < n; i++)
    {
        first = first->next;
    }

    while (first->next != nullptr)
    {
        first = first->next;
        sec = sec->next;
    }
    node *last = sec->next;
    sec->next = last->next;
    delete last;

    node *temp = dummy.next;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}