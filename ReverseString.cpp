#include <iostream>
using namespace std;

int main(){

    string str;
    cout<<"Enter String to reverse :";
    cin>>str;
    int startIdx = 0;
    int endIdx = str.length() - 1;
    int temp;

    while(startIdx < endIdx){
        temp = str[startIdx];
        str[startIdx] = str[endIdx];
        str[endIdx] = temp;
        startIdx++;
        endIdx--;
    }

    cout<<"Reversed String :"<<str;

    return 0;
}