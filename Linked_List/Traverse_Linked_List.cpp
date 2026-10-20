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

    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}