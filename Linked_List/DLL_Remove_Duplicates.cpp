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
    second->data = 1;
    third->data = 2;
    fourth->data = 3;
    fifth->data = 3;
    sixth->data = 4;
    seventh->data = 4;

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

    node *temp = head;
    node *tail = seventh;

    while (temp != nullptr && temp->next != nullptr)
    {
        if (temp->data == temp->next->data)
        {
            node *duplicate = temp->next;

            temp->next = duplicate->next;

            if (duplicate->next != nullptr)
            {
                duplicate->next->prev = temp;
            }
            else
            {
                tail = temp;
            }

            delete duplicate;
        }
        else
        {
            temp = temp->next;
        }
    }

    node *temp1 = head;
    while (temp1 != nullptr)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;

    node *temp2 = tail;

    while (temp2 != nullptr)
    {
        cout << temp2->data << " ";
        temp2 = temp2->prev;
    }
    return 0;
}
