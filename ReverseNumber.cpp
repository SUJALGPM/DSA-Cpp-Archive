#include <iostream>
using namespace std;

int main(){
    int arr[6] = {45,7,12,89,5,90};
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int startIdx = 0;
    int endIdx = arrLength - 1;
    int temp;

    //Sort Array.
    while(startIdx < endIdx){
        temp = arr[startIdx];
        arr[startIdx] = arr[endIdx];
        arr[endIdx] = temp;
        startIdx++;
        endIdx--;
    }

    cout<<"After array sort..."<<endl;
    for(int i=0;i<arrLength;i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}