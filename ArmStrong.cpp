#include <iostream>
#include <cmath>
using namespace std;

/*
Algorithm :-
step1: Extract last digit using mode operator(%).
step2: Cube the digit.
step3: remove the last digit using divide operator(/).
step4: Compare the actual number with result.
*/

int main() {
  
  int number;
  int actualNumber;
  int remainder;
  int result;

  cout<<"Enter 3-digit Number to Check ArmStrong :";
  cin>>number;

  actualNumber = number;

  while(number != 0){
    remainder = number % 10;
    result += pow(remainder,3);
    number /= 10;
  }

  if(actualNumber == result){
    cout<<"Enter number is ArmStrong.";
  }else{
    cout<<"Enter number is not ArmStrong";
  }

  return 0;
}