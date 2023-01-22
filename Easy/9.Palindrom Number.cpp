class Solution {
public:
    bool isPalindrome(int x) {
        long t=x;
        long r=0;
        while(t){
            r=r*10+t%10;
            t/=10;
        }
        return x>=0 && x==r;
    }
};
