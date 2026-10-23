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

    if (head == nullptr)
    {
        return;
    }

    else if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
    }

    else
    {

        node *temp = head;

        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }

        node *last = temp->next;
        temp->next = nullptr;
        delete last;
    }

    node *ness = head;
    while (ness != nullptr)
    {
        cout << ness->data << " ";
        ness = ness->next;
    }

    return 0;
}