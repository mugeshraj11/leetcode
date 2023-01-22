class Solution {
public:
unordered_map<int,int>map;
    int climbStairs(int n) {
       map[0]=0;
       map[1]=1;
       map[2]=2;
       if(map.find(n)!=map.end()){
       return map[n];
       }
       else{
        map[n]=climbStairs(n-1)+climbStairs(n-2);
       } 

       return map[n];
        
    }
};
