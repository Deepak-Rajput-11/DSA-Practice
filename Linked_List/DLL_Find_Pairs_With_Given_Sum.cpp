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
    node *fourth = new node;
    node *fifth = new node;
    node *sixth = new node;

    head->data = 1;
    second->data = 2;
    third->data = 4;
    fourth->data = 5;
    fifth->data = 6;
    sixth->data = 8;

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    fifth->next = sixth;
    sixth->prev = fifth;

    head->prev = nullptr;
    sixth->next = nullptr;

    node *temp = head;
    node *tail = sixth;

    node *left = head;
    node *right = tail;
    int target = 10;

    while (left != nullptr && right != nullptr && left != right && left->data < right->data)
    {

        if (left->data + right->data < target)
        {
            left = left->next;
        }
        else if (left->data + right->data > target)
        {
            right = right->prev;
        }
        else
        {
            cout << "(" << left->data << "," << right->data << ")" << endl;
            left = left->next;
            right = right->prev;
        }
    }
    return 0;
}