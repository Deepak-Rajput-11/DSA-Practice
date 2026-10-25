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
    fifth->next = nullptr;

    node *slow = head;
    node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {

        slow = slow->next;
        fast = fast->next->next;
    }

    cout << " Middle node is: " << slow->data;

    return 0;
}