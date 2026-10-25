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
    fifth->next = head;

    node *slow = head;
    node *fast = head;
    bool cycle = false;

    while (fast != nullptr && fast->next != nullptr)
    {

        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cycle = true;
            fast = head;

            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            cout << "Starting node of cycle: " << slow->data;
            break;
        }
    }
    if (!cycle)
    {
        cout << "No Cycle Exist";
    }
    return 0;
}