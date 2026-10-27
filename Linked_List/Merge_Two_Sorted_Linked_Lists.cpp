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

    head->data = 1;
    second->data = 3;
    third->data = 5;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    node *head1 = new node;
    node *sec = new node;
    node *thir = new node;

    head1->data = 2;
    sec->data = 4;
    thir->data = 6;

    head1->next = sec;
    sec->next = thir;
    thir->next = nullptr;

    node dummy;
    dummy.next = nullptr;

    node *p1 = head;
    node *p2 = head1;
    node *tail = &dummy;

    while (p1 != nullptr && p2 != nullptr)
    {
        if (p1->data <= p2->data)
        {
            tail->next = p1;
            tail = tail->next;
            p1 = p1->next;
        }
        else
        {
            tail->next = p2;
            tail = tail->next;
            p2 = p2->next;
        }
    }
    if (p1 != nullptr)
        tail->next = p1;
    else
        tail->next = p2;

    node *temp = dummy.next;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}