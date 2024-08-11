#include <iostream>
using namespace std;

void tripletSumMethod1(int arr[], int size, int num){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           for(int k=j+1;k<size;k++){
                int temp = arr[i] + arr[j] + arr[k];
                if(num == temp){
                    cout<<"We found triplet pairs of given number :"<<arr[i]<<arr[j]<<arr[k]<<endl;
                }
           }
        }
    }
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7}; //235 127 145 136
    int num;

    cout<<"Enter number to find possible pairs :";
    cin>>num;

    //First approach...
    tripletSumMethod1(arr,7,num);

    return 0;
}