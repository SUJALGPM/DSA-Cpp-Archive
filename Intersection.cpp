#include <iostream>
using namespace std;

//Find intersect element from both array...
void checkIntersection(int arr1[], int size1, int arr2[], int size2){

    int intersectIdx = 0;
    int intersectArr[min(size1,size2)];

    for(int i=0;i<size1;i++){
        
        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                // cout<<arr1[i]<<endl;
                intersectArr[intersectIdx] = arr1[i];
                intersectIdx++;
                arr2[j] = -112323;
            }
        }
    }

    for(int k=0;k<intersectIdx;k++){
        cout<<intersectArr[k]<<endl;
    }
}

int main(){
    int arr1[5] = {1,2,3,4,1};
    int arr2[3] = {1,2,3};

    checkIntersection(arr1,5,arr2,3);

    return 0;
}