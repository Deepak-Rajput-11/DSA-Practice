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

    node *temp = head;
    int key = 30;
    bool found = false;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            found = true;
            break;
        }
        temp = temp->next;
    }

    if (found)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element Not found";
    }
    return 0;
}