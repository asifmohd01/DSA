#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Prime numbers: ";
    for(int i = 0; i < n; i++){
        if(isPrime(arr[i])){
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Non-prime numbers: ";
    for(int i = 0; i < n; i++){
        if(!isPrime(arr[i])){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
