class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>a;
        map<int,int>::iterator itr;
        int j=0,k=0,l=0;
        itr=a.begin();

        for(int i=0;i<nums.size();i++){
            a[nums[k]]++;
            k++;
        }

        for(auto n:a){
            nums[l]=n.first;
            l++;
        }

        //reverse(nums.begin(),nums.begin()+a.size());

        return a.size();

        
    }
};
