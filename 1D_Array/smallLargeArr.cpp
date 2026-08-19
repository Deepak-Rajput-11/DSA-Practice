// smallest number in array

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int max[5] = {12, 43, -64, -55, 98};
//     int smallest = INT_MAX;

//     for (int i = 0; i < size; i++)
//     {
//         if (max[i] < smallest)
//         {
//             smallest = max[i];
//         }
//     }

//     cout << "smallest : "<< smallest << endl;
//     return 0;
// }

// largest number in array

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int min[5] = {34, 72, 55, -54, 23};
//     int largest = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (min[i] > largest)
//         {
//             largest = min[i];
//         }
//     }

//     cout << "largest : " << largest << endl;
//     return 0;
// }

// Both together and there index too

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size = 5;
    int num[size];
    int largest = INT_MIN;
    int smallest = INT_MAX;

    cout << "Enter values : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < size; i++)
    {
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);
    }

    cout << "smallest : " << smallest << endl;
    cout << "largest : " << largest << endl;

    int smallValue = smallest;
    int largeValue = largest;

    for (int i = 0; i < size; i++)
    {
        if (num[i] == smallValue)
        {
            cout << "smallest value index is : " << i << endl;
        }
        else if (num[i] == largeValue)
        {
            cout << "Largest value index is : " << i << endl;
        }
    }
    return 0;
}