#include <iostream>
using namespace std;

int main() {
    string str;

    cout<<"Enter string to check palindrome :";
    cin>>str;
    
    int startIdx = 0;
    int endIdx = str.length() - 1;
    bool isPalindrome = true;
    
    while(startIdx < endIdx){
        if(str[startIdx] != str[endIdx]){
            isPalindrome = false;
            break;
        }
        startIdx++;
        endIdx--;
    }

    if(isPalindrome){
        cout<<"Your enter string is palindrome.";
    }else{
        cout<<"Your enter string is not palindrome..!";
    }




  return 0;
}