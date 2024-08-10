#include <iostream>
using namespace std;

bool checkPresentOrNot(int arr[],int size,int num){
    for(int i=0;i<size;i++){
        if(num == arr[i]){
            return true;
        }
    }

    return false;
}

int main(){
    int arr[6] = {45,12,89,4,88,23};
    int number;

    cout<<"Enter number to check :";
    cin>>number;

    //Call boolean function.
    bool result = checkPresentOrNot(arr,6,number);

    if(result){
        cout<<"Enter number "<<number<<" is present in array.";
    }else{
        cout<<"Enter number "<<number<<" is not present in array..!";
    }

    return 0;
}