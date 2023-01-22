class Solution {
public:
int flag=0;
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[10000];
        if(flag==0){
        for(int i=0;i<cost.size();i++){
            dp[i]=cost[i];
            flag=1;
        }
        }

        dp[cost.size()]=0;

        for(int i=cost.size()-1;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+2],dp[i+1]);
        }

        return ((dp[0]>dp[1])?dp[1]:dp[0]);




        
    }
};
