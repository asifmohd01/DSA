#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Optimized method using sorting
int MajorityElement(vector<int>& nums) {
    int n = nums.size();

    // Sort the array
    sort(nums.begin(), nums.end());

    // Frequency count
    int freq = 1;
    int ans = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2) {
            return ans;
        }
    }

    // If not found (though in majority element problems, one always exists)
    return -1;
}

int main() {
  vector<int> nums = {1, 2, 2, 1, 1};

    int result = MajorityElement(nums);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
