class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> m;
        for (auto c:magazine){
            m[c]++;
        }
        for (auto s: ransomNote){
            if (m[s]<= 0)
             return false;
            m[s]--;
        }
        return true;
    }
};
