#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> &nums, int target){
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target value:" << endl;
    cin >> target;

    vector<int> ans = PairSum(nums, target);

    if (ans.size() == 2)
        cout << ans[0] << " , " << ans[1] << endl;
    else
        cout << "No pair found!" << endl;

    return 0;
}
