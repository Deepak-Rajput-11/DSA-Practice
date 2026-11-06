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

    int value = 25;
    node *newNode = new node;
    newNode->data = value;

    if (newNode->data < head->data)
    {
        node *current = head;
        while (current->next != head)
        {
            current = current->next;
        }
        node *last = current;
        newNode->next = head;
        head = newNode;
        last->next = head;
    }

    else
    {
        node *current = head;

        while (current->next != head &&
               current->next->data < newNode->data)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    return 0;
}