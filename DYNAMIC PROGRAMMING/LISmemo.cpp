#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calculateLIS(vector<int> &nums) {
    int n = nums.size();
    if (n == 0) return 0;
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }

    int maxLIS = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > maxLIS) {
            maxLIS = dp[i];
        }
    }

    return maxLIS;
}

int main() {
    vector<int> nums = {10, 22, 9, 33, 21, 50, 41, 60};
    cout << calculateLIS(nums) << endl;
    return 0;
}
