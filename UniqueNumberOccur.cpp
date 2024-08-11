#include <iostream>
using namespace std;


//Method 1...
void checkUniqueOccur1(int arr[],int size){
    int occurenceCount;

    for(int i=0;i<size;i++){

        for(int j=0;j<size;j++){
            if(i!=j && arr[i] == arr[j]){
                occurenceCount += 1;
            }
        }
    }
}

int main(){
    int arr[9] = {2,7,7,7,7,2,8,8,8};


    return 0;
}


//Note this above problem is not solved....!!!!