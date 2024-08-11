#include <iostream>
using namespace std;

void pairSumMethod1(int arr[], int size, int num){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int temp = arr[i] + arr[j];
            if(num == temp){
                cout<<"Pair we found :"<<arr[i]<<arr[j]<<endl;
            }
        }
    }
}

int main(){
    int arr[5] = {1,2,3,4,5}; //14 23 32 41 
    int num;

    cout<<"Enter number to find possible pairs :";
    cin>>num;

    //First approach...
    pairSumMethod1(arr,5,num);

    return 0;
}