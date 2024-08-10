#include <iostream>
using namespace std;

//Find minivalue from array.
int minValue(int arr[], int size){
    int min = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;
}

//Find maxvalue from array.
int maxValue(int arr[], int size){
    int max = arr[0];
    int secondMax = 0;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
    }
    
    return max;
}

//Main Function.    
int main() {
    int size;
    cout<<"Enter Size of an array :";
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    //Find min value from an array.
    cout<<"Min value from array :"<<minValue(num,size)<<endl;
    cout<<"Max value from array :"<<maxValue(num,size)<<endl;

  return 0;
}