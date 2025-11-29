// ✅ 3. Optimal Method (Dutch National Flag Algorithm)
#include <bits/stdc++.h>
using namespace std;

void dnfSort(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++, mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {2, 0, 1, 2, 1, 0, 0, 1, 2};

    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    dnfSort(arr);

    cout << "Sorted Array (DNF Algorithm): ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}