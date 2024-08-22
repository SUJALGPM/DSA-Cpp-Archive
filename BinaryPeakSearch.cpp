#include <iostream>
using namespace std;

//Search Peak Element from mountain.
int searchPeakElement(int arr[], int size){
    int start = 0;
    int end = size -1;
    int ans = -1;

    for(int i=0;i<size;i++){
        
        int mid = start + (end - start)/2;

        //ascending part.
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }

    return start;
}


int main(){
    
    int arr[6] = {2,8,15,10,9,3};

    //First approach...
    int peakELement = searchPeakElement(arr,6);
    cout<<"Peak Element from mountain :"<<peakELement<<endl;

    return 0;
}