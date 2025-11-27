#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int FactorialN(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    int Fact = FactorialN(n);
    cout << Fact << endl;
   
    cout<<FactorialN(5)<<endl;
    return 0;
}