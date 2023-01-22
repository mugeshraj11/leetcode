import java.util.*;
class Solution {
    public String addBinary(String s1, String s2) {
        StringBuilder a=new StringBuilder();
        int i=s1.length()-1;
        int j=s2.length()-1;
        int sum=0,carry=0;
        while(i>=0 || j>=0){
            sum=carry;
            if(i>=0) sum=sum+s1.charAt(i--)-'0';
            if(j>=0) sum=sum+s2.charAt(j--)-'0';
            carry=sum/2;
            a.append(sum%2);
        }
        if(carry!=0)
        a.append(carry);
        return a.reverse().toString();
    }
}
