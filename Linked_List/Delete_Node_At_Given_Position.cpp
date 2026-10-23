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

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    int position = 3;
    node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    node *target = temp->next;
    temp->next = target->next;
    delete target;

    node *ness = head;
    while (ness != nullptr)
    {
        cout << ness->data << " ";
        ness = ness->next;
    }
    return 0;
}