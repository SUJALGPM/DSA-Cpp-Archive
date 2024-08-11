#include <iostream>
using namespace std;

void movesOnes(int arr[], int size){
    int startIdx = 0;
    int endIdx = size - 1;

    while(startIdx < endIdx){

        //Left side searching.
        while(arr[startIdx] == 0){
            startIdx++;
        }

        //Right side searching.
        while(arr[endIdx] == 1){
            endIdx--;
        }

        if(arr[startIdx] == 1 && arr[endIdx] == 0){
            swap(arr[startIdx], arr[endIdx]);
            startIdx++;
            endIdx--;
        }
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[6] = {0,1,0,0,1,1};

    //First approach..
    movesOnes(arr,6);

    return 0;
}