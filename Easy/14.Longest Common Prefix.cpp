class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string str="",st1="",st="";

        for(int i=0;i<strs[i].size();i++){
            st1=strs[0];
            for(int j=1;j<strs.size();j++){
                st=strs[j];
                if(st[i]!=st1[i]){
                    str=str+st[i];
                }
            }
        }
        return str;
        
    }
};
