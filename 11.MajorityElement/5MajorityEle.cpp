#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Boyer-Moore Voting Algorithm
int majorityElement(vector<int> &nums){
    int freq = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++){
        if (freq == 0){
            ans = nums[i];
        }
        if (ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1, 2, 2, 1, 1};

    int result = majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}
