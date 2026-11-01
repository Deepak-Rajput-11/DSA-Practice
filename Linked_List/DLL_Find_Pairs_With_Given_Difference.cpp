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
    node *seventh = new node;

    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;
    fifth->data = 5;
    sixth->data = 6;
    seventh->data = 7;

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

    sixth->next = seventh;
    seventh->prev = sixth;

    head->prev = nullptr;
    seventh->next = nullptr;

    node *left = head;
    node *right = left->next;
    int k = 3;
    bool found = false;

    while (left != nullptr && right != nullptr && left != right && left->data < right->data)
    {

        if (right->data - left->data < k)
        {
            right = right->next;
        }
        else if (right->data - left->data > k)
        {
            left = left->next;
        }
        else
        {
            cout << "(" << left->data << "," << right->data << ")" << endl;
            left = left->next;
            right = right->next;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No Pairs Found";
    }
    return 0;
}