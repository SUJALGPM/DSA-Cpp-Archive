#include <iostream>
using namespace std;

//Method 1...
void checkUniqueValueM1(int arr[], int size){
    bool isUnique;

    for(int i=0;i<size;i++){
        isUnique = true;

        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique = false;
                break;
            }
        }

        if(isUnique){
            cout<<"Unique values is :"<<arr[i]<<endl;
        }
    }  
}

//Method 2...
void checkUniqueValueM2(int arr[], int size){

    int result = 0;

    for(int i=0;i<size;i++){
        result = result ^ arr[i]; // XOR like 2^2=0 so all common XOR in end 0^5=5 XOR any number with 0 is that number returns.!
    }

    cout<<"Unique values is :"<<result<<endl;
}


int main(){
    int arr[7] = {2,7,7,2,8,8,5};
    int temp = 0;
    
    //First method to check unique values.
    checkUniqueValueM1(arr,7);

    //Second method to check unique values.
    checkUniqueValueM2(arr,7);

    return 0;
}