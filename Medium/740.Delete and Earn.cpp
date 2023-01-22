class Solution {
public:

unordered_map<int, int> m;
    int deleteAndEarn(vector<int>& nums) {

        int dp[100000];

        int maxi=*max_element(nums.begin(),nums.end());

        for(auto n:nums) m[n]++;

        dp[1]=m[1];
        dp[2]=max(dp[1],m[2]*2);

        for(int i=3;i<=maxi;i++){
            dp[i]=max(dp[i-1],dp[i-2]+(m[i]*i));
        }

        return dp[maxi];

        
    }
};
