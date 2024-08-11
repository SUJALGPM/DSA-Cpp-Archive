#include <iostream>
using namespace std;

//Method 1...
void checkDuplicateValues(int arr[], int size){
    bool duplicateNumber;

    int duplicateValueArr[size];
    int duplicateIdx = 0;

    for(int i=0;i<size - 1;i++){
        duplicateNumber = false;

        for(int j=0;j<size;j++){
            if(i!=j && arr[i] == arr[j]){
                duplicateNumber = true;
                break;
            }
        }

        if(duplicateNumber){
            bool alreadyExist = false;

            //Check element present or not..?
            for(int k=0;k<duplicateIdx;k++){
                if(duplicateValueArr[k] == arr[i]){
                    alreadyExist = true;
                    break;
                }
            }

            //Add element in duplicate array..
            if(!alreadyExist){
                duplicateValueArr[duplicateIdx] = arr[i];
                duplicateIdx++;
                cout<<"We found duplicate value in array :"<<arr[i]<<endl;
            }
        }
    }
}

int main(){
    int arr[6] = {1,2,3,4,2,3};
    
    //First approach to find duplicate values...
    checkDuplicateValues(arr,6);

    return 0;
}