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

    node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";

    node *newNode = new node;
    newNode->data = 25;

    int position = 3;
    node *ness = head;
    int count = 1;

    while (count < position - 1)
    {
        ness = ness->next;
        count++;
    }

    newNode->next = ness->next;

    ness->next = newNode;

    node *ness1 = head;

    while (ness1 != nullptr)
    {
        cout << ness1->data << " ";
        ness1 = ness1->next;
    }

    return 0;
}