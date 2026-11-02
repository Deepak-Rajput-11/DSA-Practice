#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{

    struct node
    {
        int data;
        node *next;
        node *prev;
    };

    struct Compare
    {
        bool operator()(node *a, node *b)
        {
            return a->data > b->data;
        }
    };

    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth = new node;
    node *sixth = new node;

    head->data = 3;
    second->data = 1;
    third->data = 2;
    fourth->data = 5;
    fifth->data = 4;
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

    int k = 2;

    priority_queue<node *, vector<node *>, Compare> pq;
    node *temp = head;

    for (int i = 0; i <= k && temp != nullptr; i++)
    {
        pq.push(temp);
        temp = temp->next;
    }

    node *newHead = nullptr;
    node *newTail = nullptr;

    while (!pq.empty())
    {
        node *smallest = pq.top();
        pq.pop();

        if (temp != nullptr)
        {
            pq.push(temp);
            temp = temp->next;
        }

        smallest->prev = newTail;

        if (newTail != nullptr)
        {
            newTail->next = smallest;
        }
        else
        {
            newHead = smallest;
        }

        newTail = smallest;
        smallest->next = nullptr;
    }

    head = newHead;
    tail = newTail;
    tail->next = nullptr;

    current = head;

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    return 0;
}