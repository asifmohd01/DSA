#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;   // arr = &arr[0]
    cout << *ptr << endl;       // 10
    cout << *(ptr + 1) << endl; // 20
    cout << *(ptr + 2) << endl; // 30
    ptr++;
    cout<< *ptr <<endl;         //20
}
