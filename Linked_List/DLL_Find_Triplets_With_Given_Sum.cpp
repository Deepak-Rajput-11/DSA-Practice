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
    third->data = 3;
    fourth->data = 4;
    fifth->data = 5;
    sixth->data = 6;

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

    node *current = head;
    node *tail = sixth;

    int target = 10;

    while (current != nullptr && current->next != nullptr && current->next->next != nullptr)
    {
        node *left = current->next;
        node *right = tail;

        while (left != nullptr && right != nullptr && left != right && left->data < right->data)
        {

            int sum = current->data + left->data + right->data;
            if (sum < target)
            {
                left = left->next;
            }
            else if (sum > target)
            {
                right = right->prev;
            }
            else
            {
                cout << "(" << current->data << ", " << left->data << ", " << right->data << ")" << endl;
                left = left->next;
                right = right->prev;
            }
        }
        current = current->next;
    }
    return 0;
}