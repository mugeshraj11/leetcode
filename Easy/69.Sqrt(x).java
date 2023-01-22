class Solution {
    public int mySqrt(int x) {
        long start=0;
        long end=x;
        while(start<end){
            long mid=start+((long)end-start+1)/2;
            if(mid*mid<=x){
                start=mid;
            }
            else
            end=mid-1;

            
        }
        return (int)start;
    }

}
