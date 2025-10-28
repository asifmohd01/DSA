#include <iostream>
#include <vector>
using namespace std;

// Brute Force method
int MajorityElement(vector<int>& nums) {
    int n = nums.size();
    for (int val : nums) {
        int freq = 0;
        for (int el : nums) {
            if (el == val) {
                freq++;
            }
        }
        if (freq > n / 2) {
            return val;
        }
    }
    return -1; // if no majority element found
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
