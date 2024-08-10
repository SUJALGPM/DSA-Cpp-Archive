#include <iostream>
#include <cmath>
using namespace std;

bool checkPrimeNumber(int number){

    //Number is less than 1 or equal to 1 is not a prime number.
    if(number <= 1){
        return false;
    }

    //Number is even or equal to 2 means it prime number.
    if(number == 2){
        return true;
    }

    //Number is divisible by 2 or we get reminder as 0 means number is not prime number.
    if(number%2 == 0){
        return false;
    }

    //For odd numbers, the function checks divisibility from 3 up to the square root of the number (incrementing by 2 each time).
    for(int i=3;i<=sqrt(number);i += 2){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Check number is prime or not ?"<<endl;
    cout<<"Enter Number to check :"<<endl;
    cin>>n;

    //Check a number is prime or not using boolean prime function...
    if(checkPrimeNumber(n)){
        cout<<"Number you have enter is prime number."<<endl;
    }else{
        cout<<"Number you have enter is not prime number..!"<<endl;
    }

    return 0;
}