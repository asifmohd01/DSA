#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;

    for (int i = 0; i < height.size(); i++) {
        for (int j = i + 1; j < height.size(); j++) {
            int w = j - i;
            int ht = min(height[i], height[j]); // ✅ use min, not max
            int currWater = w * ht;

            maxWater = max(maxWater, currWater); // ✅ added missing semicolon
        }
    }
    return maxWater;

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // ✅ should be vector, not array

    int result = maxArea(height);
    cout << "The Area of container with most water is: " << result << endl;
    return 0;
}
