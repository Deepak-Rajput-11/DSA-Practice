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
    fifth->next = head;

    if (head == nullptr)
    {
        cout << "List is empty";
    }
    else
    {
        node *current = head;

        do
        {
            cout << current->data << " ";
            current = current->next;

        } while (current != head);
    }
    return 0;
}