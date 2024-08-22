#include <iostream>
using namespace std;

// First Occurrence.
int firstOccurence(int arr[], int size, int num) {
    int start = 0;
    int end = size - 1;
    int foccur = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == num) {
            foccur = mid;
            end = mid - 1; 
        } else if (arr[mid] < num) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return foccur;
}

// Last Occurrence.
int lastOccurence(int arr[], int size, int num) {
    int start = 0;
    int end = size - 1;
    int lastOccur = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == num) { 
            lastOccur = mid;
            start = mid + 1;  
        } else if (arr[mid] < num) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return lastOccur;
}  

int main() {
    int arr[6] = {1, 2, 2, 2, 3, 3};
    int num;

    cout << "Enter Element to Check First and Last Occurrence: ";
    cin >> num;

    int firstOccur = firstOccurence(arr, 6, num);
    int lastOccur = lastOccurence(arr, 6, num);

    int noOfOccurence = (lastOccur - firstOccur) + 1;
    cout<<"No of Occurence "<<noOfOccurence<<endl;

    return 0;
}
