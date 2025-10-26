class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s = accumulate(nums.begin(), nums.end(), 0);
        if (s % 2 == 1) return false;
        int target = s / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;
        for (int num : nums) {
            for (int sum = target; sum >= num; sum--) {
                if (dp[sum - num]) dp[sum] = true;
            }
            if (dp[target]) return true;
        }
        return dp[target];
    }
};
