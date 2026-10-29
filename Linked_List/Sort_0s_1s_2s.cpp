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

    head->data = 1;
    second->data = 0;
    third->data = 2;
    fourth->data = 1;
    fifth->data = 0;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    int count0 = 0, count1 = 0, count2 = 0;
    node *temp = head;

    while (temp != nullptr)
    {
        if (temp->data == 0)
            count0++;
        else if (temp->data == 1)
            count1++;
        else if (temp->data == 2)
            count2++;

        temp = temp->next;
    }

    temp = head;

    while (temp != nullptr && count0 > 0)
    {
        temp->data = 0;
        count0--;
        temp = temp->next;
    }

    while (temp != nullptr && count1 > 0)
    {
        temp->data = 1;
        count1--;
        temp = temp->next;
    }

    while (temp != nullptr && count2 > 0)
    {
        temp->data = 2;
        count2--;
        temp = temp->next;
    }

    node *ness = head;
    while (ness != nullptr)
    {
        cout << ness->data << " ";
        ness = ness->next;
    }
    return 0;
}