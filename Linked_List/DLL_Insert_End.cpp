#include <iostream>
using namespace std;
int main()
{

    struct node
    {
        int data;
        node *next;
        node *prev;
    };

    node *head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    head->prev = nullptr;
    third->next = nullptr;

    node *newNode = new node;
    newNode->data = 40;

    newNode->next = nullptr;
    third->next = newNode;
    newNode->prev = third;

    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    node *temp1 = newNode;

    while (temp1 != nullptr)
    {
        cout << temp1->data << " ";
        temp1 = temp1->prev;
    }

    return 0;
}