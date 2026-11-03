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
    third->next = head;

    node *newNode = new node;
    newNode->data = 40;

    if (head == nullptr)
    {
        newNode->next = newNode;
        head = newNode;
    }
    else
    {
        node *last = head;

        while (last->next != head)
        {
            last = last->next;
        }

        last->next = newNode;
        newNode->next = head;
    }

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