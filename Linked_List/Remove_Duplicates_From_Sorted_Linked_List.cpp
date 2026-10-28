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
    node *sixth = new node;

    head->data = 1;
    second->data = 1;
    third->data = 2;
    fourth->data = 3;
    fifth->data = 3;
    sixth->data = 4;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = nullptr;

    node *temp = head;

    while (temp != nullptr && temp->next != nullptr)
    {

        if (temp->data == temp->next->data)
        {
            node *target = temp->next;
            temp->next = target->next;
            delete target;
        }
        else
        {
            temp = temp->next;
        }
    }

    node *ness = head;
    while (ness != nullptr)
    {
        cout << ness->data << " ";
        ness = ness->next;
    }

    return 0;
}