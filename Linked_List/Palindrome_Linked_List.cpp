#include <iostream>
#include <vector>
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
    fourth->data = 2;
    fifth->data = 1;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    vector<int> arr;

    node *temp = head;
    while (temp != nullptr)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int n = arr.size();
    int i = 0;
    int j = n - 1;
    bool isPalindrome = true;

    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}

// Optimal Approach (main Solution)

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
    fourth->data = 2;
    fifth->data = 1;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    // Step 1: Find the middle
    node *slow = head;
    node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse the second half
    node *prev = nullptr;
    node *current = slow;

    while (current != nullptr)
    {
        node *nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    // Step 3: Compare both halves
    node *left = head;
    node *right = prev;
    bool isPalindrome = true;

    while (right != nullptr)
    {
        if (left->data != right->data)
        {
            isPalindrome = false;
            break;
        }

        left = left->next;
        right = right->next;
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
