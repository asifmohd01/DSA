// ✅ 1. Brute Force Method (Using sort())
#include <bits/stdc++.h>
using namespace std;

void bruteSort(vector<int> &nums) {
    sort(nums.begin(), nums.end());
}

int main() {
    vector<int> arr = {2, 0, 1, 2, 1, 0};

    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    bruteSort(arr);

    cout << "Sorted Array (Brute Force): ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
