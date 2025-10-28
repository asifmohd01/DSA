#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumSubArraySum(vector<int> & nums){
    int currSum = 0, maxSum = INT_MIN;

    for(int val : nums){
        currSum += val;
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int res = maximumSubArraySum(nums);
    cout<<"Maximum SubArray Sum is:"<< res <<endl;
    return 0;
}