#include <iostream>
using namespace std;

void swapNumber(int arr[], int size){
    for(int i=0;i<size;i += 2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int oddArr[7] = {1,2,3,4,5,6,7};
    int temp;

    // for(int i=0;i<6;i+=2){
    //     temp = arr[i];
    //     arr[i] = arr[i+1];
    //     arr[i+1] = temp;
    // }

    // for(int i=0;i<6;i++){
    //     cout<<arr[i];
    // }


    swapNumber(oddArr,7);


    return 0;
}