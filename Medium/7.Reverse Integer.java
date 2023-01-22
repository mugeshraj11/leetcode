class Solution {
    public int reverse(int x) {
        int num=Math.abs(x);
        String n=Integer.toString(num);
        int length=n.length();
        length--;
        int rev=0,a=0;
        while(num!=0){
            a=num%10;
            rev+=a*Math.pow(10,length);
            num=num/10;
            length--;
        }
        if(x<0)
        rev=rev-(2*rev);
        
        if(rev<2147483647 && rev>-2147483648)
        return rev;
        return 0;
        
    }
}
