#include <bits/stdc++.h>
using namespace std;

int recBinarySearch(vector<int> arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid])
            return recBinarySearch(arr, tar, mid + 1, end);   // search right half
        else if (tar < arr[mid])
            return recBinarySearch(arr, tar, st, mid - 1);    // search left half
        else
            return mid;  // found
    }
    return -1;  // not found
}

int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 8, 12};
    int target = 4;

    cout << recBinarySearch(arr, target, 0, arr.size() - 1);  // Output: 6
    return 0;
}
