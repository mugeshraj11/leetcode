class Solution {
    public int lengthOfLastWord(String s) {
        s=s.trim();
        int num=0;
        int index=s.length()-1;
        while(index>=0 && s.charAt(index)!=' '){
            num++;
            index--;
        }

        return num;
    }
}
