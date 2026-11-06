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

    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;
    fifth->data = 5;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = head;

    int n = 5;
    int k = 2;
    node *current = head;
    node *prev = fifth;
    int count = 1;
    while (n > 1)
    {

        while (count < k)
        {
            prev = current;
            current = current->next;
            count++;
        }

        if (current == head)
        {
            head = current->next;
        }

        prev->next = current->next;
        delete current;
        current = prev->next;
        count = 1;
        n--;
    }
    cout << "Survivor: " << current->data;
    return 0;
}