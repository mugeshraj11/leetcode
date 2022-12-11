#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        int value,sum=0,flag=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                value=abs(1-5);
                sum+=value;
                flag=1;
                }
            else if(s[i+1]=='X'){
                value=abs(1-10);
                sum+=value;
                flag=1;
            }
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    sum+=40;
                    flag=1;
                }
                else if(s[i+1]=='C'){
                    sum+=90;
                    flag=1;
                }
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    flag=1;
                    sum+=400;
                }
                else if(s[i+1]=='M'){
                    flag=1;
                    sum+=900;
                }
            }
            if(flag==1){
                i++;
                continue;
            }

           
                if(s[i]=='I')
                value=1;
                if(s[i]=='X')
                value=10;
                if(s[i]=='V')
                value=5;
                if(s[i]=='L')
                value=50;
                if(s[i]=='C')
                value=100;
                if(s[i]=='D')
                value=500;
                if(s[i]=='M')
                value=1000;

                sum+=value;
            }
                
            return sum;
    }
        };




int main() {
    // Write C++ code here
    string a;
    cin>>a;
    Solution ob;
    int ans=ob.romanToInt(a);
    cout<<ans;
    

    return 0;
}