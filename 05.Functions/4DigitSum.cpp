#include<iostream>
using namespace std;

int SumOfDigits(int num){
    int digitSum = 0;
    while(num > 0){
       int lastDigit = num % 10;
       num /= 10;
       digitSum += lastDigit;
    }
    return digitSum;
}

int main(){
    cout<<"Sum:"<<SumOfDigits(2356)<<endl;
    return 0;
}