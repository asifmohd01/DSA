#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0, pow = 1;

    while (decNum > 0) {
        int rem = decNum % 2;   // ✅ remainder should be mod 2
        decNum /= 2;            // divide by 2

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;   // binary form as integer
}

int main() {
    int decNum = 50;

    for (int i = 0; i <= 10; i++) {
        cout << "Binary of " << i << " = " << decToBinary(i) << endl;
    }

    cout << "Binary of " << decNum << " = " << decToBinary(decNum) << endl;

    return 0;
}
