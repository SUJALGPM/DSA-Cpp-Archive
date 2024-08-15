#include <iostream>
#include <chrono>
using namespace std;

/*
1. Array must be in montonic manner means asc or desc manner.
*/

void binarySearchTech1(int arr[], int size, int num)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        // Dynamic found index.
        int midIdx = left + right / 2;
        cout << "Check MidIdx movement :" << midIdx << endl;

        if (arr[midIdx] == num)
        {
            cout << "We found that element : " << arr[midIdx] << endl;
            return;
        }
        else if (arr[midIdx] < num)
        {
            left += 1;
        }
        else
        {
            right -= 1;
        }
    }
    cout << "Element not found..!" << endl;
}

int main()
{
    int arr[8] = {3, 5, 9, 11, 13, 15, 18, 20};
    int num;

    cout << "Enter Number to check present or not with help of binary search :";
    cin >> num;
    
    // Start measuring time
    auto start = chrono::high_resolution_clock::now();

    // Execute the binary search
    binarySearchTech1(arr, 8, num);

    // Stop measuring time
    auto stop = chrono::high_resolution_clock::now();

    // Calculate the duration in microseconds
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "Execution time: " << duration.count() << " microseconds" << endl;

    return 0;
}