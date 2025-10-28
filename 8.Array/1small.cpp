#include <bits/stdc++.h>
using namespace std;

int smallestNumber(int nums[], int n) {
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i]; 
            // smallest = min(nums[i], smallest)  //other way to find smallest number in a array
        }
    }
    return smallest;
}

int main() {
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = smallestNumber(nums, n);
    cout << "The smallest number is: " << result << endl;

    return 0;
}
