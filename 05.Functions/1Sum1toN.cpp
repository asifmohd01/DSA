#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Sum1toN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    int TotalSum = Sum1toN(n);
    cout << TotalSum << endl;

    return 0;
}