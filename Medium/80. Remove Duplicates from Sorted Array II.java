class Solution {
    public int removeDuplicates(int[] nums) {
        int length=nums.length;

        for(int i=2;i<length;i++){
            if(nums[i-2]==nums[i]){
                length=length-1;
                for(int j=i;j<length;j++){
                    nums[j]=nums[j+1];

                }
                i--;
            }
        }

        return length;
        
    }
}
