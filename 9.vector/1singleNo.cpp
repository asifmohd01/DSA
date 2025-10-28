#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int val : nums){
        ans = ans ^ val;  // XOR all numbers
    }
    return ans;
}

int main() {
    int n;
    cin >> n;  // input size of array

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];  // input elements
    }

    int result = singleNumber(nums);
    cout << result << endl;  // print the single number

    return 0;
}
