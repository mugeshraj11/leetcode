class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int,int> map;
        map[0]=0;
        map[1]=1;
        map[2]=1;

        for(int i=3;i<=n;i++){
            map[i]=map[i-1]+map[i-2]+map[i-3];
        }

        return map[n];
    }
};
