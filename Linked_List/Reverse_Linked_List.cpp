#include <iostream>
using namespace std;
int main()
{

    struct Node
    {
        int data;
        Node *next;
    };

    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    Node *prev = nullptr;
    Node *temp = head;

    while (temp != nullptr)
    {
        Node *nextNode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextNode;
    }

    head = prev;

    temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}