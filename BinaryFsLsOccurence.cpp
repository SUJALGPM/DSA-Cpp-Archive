#include <iostream>
using namespace std;

//First occurence approach...
void firstOccurence(int arr[], int size, int num){

    int start = 0;
    int end = size - 1;
    int firstOccur = -1;
    
    while(start <= end){
        int mid = start + (end-start) / 2;

        if(arr[mid] == num){
            firstOccur = mid;
            end = mid - 1;
        }else if(arr[mid] < num){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    cout<<"First occurence of Element "<<num<<" at Index :"<<firstOccur<<endl;
}  

//Last occurence approach...
void lastOccurence(int arr[], int size, int num){

    int start = 0;
    int end = size - 1;
    int lastOccur = -1;
    
    while(start <= end){
        int mid = start + (end-start) / 2;
        cout<<"check start :"<<start<<endl;
        cout<<"check end :"<<end<<endl;
        cout<<"check mid :"<<mid<<endl;

        if(arr[mid] == num){ 
            lastOccur = mid;
            start = mid + 1;
        }else if(arr[mid] < num){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    cout<<"Last occurence of Element "<<num<<" at Index :"<<lastOccur<<endl;
}  

int main(){
    int arr[5] = {1,2,3,3,5};
    int num;

    cout<<"Enter Element to print First and Last Occurence :";
    cin>>num;

    //First method.
    firstOccurence(arr,5,num);
    lastOccurence(arr,5,num);

    return 0;
}