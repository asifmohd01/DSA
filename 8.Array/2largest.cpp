#include <bits/stdc++.h>
using namespace std;

int largestNumber(int nums[], int n) {
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
            // largest = max(nums[i], largest) other way to find largest number
        }
    }
    return largest;
}

int main() {
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = largestNumber(nums, n);
    cout << "The largest number is: " << result << endl;

    return 0;
}
