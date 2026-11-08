#include <iostream>
using namespace std;

int main()
{
    struct node
    {
        int data;
        node *next;
    };

    node *top = NULL;

    for (int i = 0; i < 3; i++)
    {
        int value;
        cin >> value;

        node *newNode = new node;
        newNode->data = value;

        newNode->next = top;
        top = newNode;
    }

    // Pop Operation
    if (top == NULL)
    {
        cout << "Stack Underflow";
    }
    else
    {
        node *temp = top;
        top = top->next;
        delete temp;
    }

    // Peek Operation
    if (top == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Top element: " << top->data << endl;
    }

    // Display Operation
    if (top == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        node *temp = top;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    return 0;
}