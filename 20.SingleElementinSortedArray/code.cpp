#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n = A.size();

    if (n == 1) return A[0]; // If only one element, return it directly.

    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        // Check boundary cases
        if (mid == 0 && A[0] != A[1]) return A[mid];
        if (mid == n - 1 && A[n - 1] != A[n - 2]) return A[mid];

        // Check if A[mid] is unique
        if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1])
            return A[mid];

        // Decide which half to move towards
        if (mid % 2 == 0) { // mid index even
            if (A[mid] == A[mid - 1]) {
                end = mid - 1; // unique lies on left side
            } else {
                st = mid + 1; // unique lies on right side
            }
        } else { // mid index odd
            if (A[mid] == A[mid - 1]) {
                st = mid + 1; // move right
            } else {
                end = mid - 1; // move left
            }
        }
    }
    return -1; // in case not found
}

int main() {
    vector<int> A = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "Single Non-Duplicate Element: " << singleNonDuplicate(A) << endl;
    return 0;
}
