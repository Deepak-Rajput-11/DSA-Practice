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

    node *ness = head;
    head = head->next;
    delete ness;

    node *nessecary = head;

    while (nessecary != nullptr)
    {
        cout << nessecary->data << " ";
        nessecary = nessecary->next;
    }
    return 0;
}