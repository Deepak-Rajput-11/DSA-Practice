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
    fourth->next = nullptr;

    node *head1 = new node;
    node *sec = new node;

    head1->data = 15;
    sec->data = 25;

    head1->next = sec;
    sec->next = third; // Shared node containing 30

    // Edge case
    // node *head = new node;
    // node *second = new node;
    // node *third = new node;
    // node *fourth = new node;

    // head->data = 10;
    // second->data = 20;
    // third->data = 30;
    // fourth->data = 40;

    // head->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = nullptr;

    // node *head1 = new node;

    // head1->data = 15;
    // head1->next = third;

    // Count nodes in both lists
    int lenA = 0;
    int lenB = 0;

    node *temp = head;

    while (temp != nullptr)
    {
        lenA++;
        temp = temp->next;
    }

    temp = head1;

    while (temp != nullptr)
    {
        lenB++;
        temp = temp->next;
    }

    // Align the pointers
    node *tempA = head;
    node *tempB = head1;

    int diff = lenA - lenB;

    if (diff < 0)
    {
        diff = -diff;
    }

    if (lenA > lenB)
    {
        for (int i = 0; i < diff; i++)
        {
            tempA = tempA->next;
        }
    }
    else
    {
        for (int i = 0; i < diff; i++)
        {
            tempB = tempB->next;
        }
    }

    while (tempA != nullptr && tempB != nullptr)
    {
        if (tempA == tempB)
        {
            cout << "Intersection point: " << tempA->data;
            return 0;
        }

        tempA = tempA->next;
        tempB = tempB->next;
    }

    cout << "No intersection found";

    return 0;
}