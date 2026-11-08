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

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;

    int key = 30;
    if (head == nullptr)
    {
        cout << "List is empty";
    }
    else
    {
        node *current = head;
        node *prev = nullptr;
        bool found = false;

        do
        {
            if (current->data == key)
            {
                found = true;

                // Only one node
                if (current->next == current)
                {
                    delete current;
                    head = nullptr;
                }
                // Deleting the head
                else if (current == head)
                {
                    node *last = head;

                    while (last->next != head)
                    {
                        last = last->next;
                    }

                    head = head->next;
                    last->next = head;

                    delete current;
                }
                // Deleting any other node
                else
                {
                    prev->next = current->next;
                    delete current;
                }

                break;
            }
            else
            {
                prev = current;
                current = current->next;
            }

        } while (current != head);

        if (!found)
        {
            cout << "Value not found";
        }

        if (head == nullptr)
        {
            cout << "List is empty";
        }
        else
        {
            node *temp = head;

            do
            {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
        }
    }
    return 0;
}