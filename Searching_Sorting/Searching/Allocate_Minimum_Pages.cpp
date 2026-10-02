#include <iostream>
using namespace std;
int main()
{
    int books[] = {10, 20, 30, 40};
    int n = sizeof(books) / sizeof(books[0]);
    int students = 2;
    int start = 40;
    int end = 100;
    int pages = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int studentCount = 1;
        int currentPages = 0;

        for (int i = 0; i < n; i++)
        {
            if (currentPages + books[i] <= mid)
            {
                currentPages += books[i];
            }
            else
            {
                studentCount++;
                currentPages = books[i];
            }
        }
        if (studentCount <= students)
        {
            pages = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Minimum possible maximum pages: " << pages;
    return 0;
}