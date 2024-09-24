#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::string;
class Solution {
public:
    //wrong approach, characters can only be added to the beginning of the string!
    string shortestPalindrome_wrong(string s) {
        vector<char> fix;
        int start = 0, end = s.size()-1;
        while(start<end){
            if(s[start]==s[end]){
                fix.push_back(s[start++]);
                end--;
            }else{
                fix.push_back(s[end--]);
            }
        }
        for(;start<s.size();start++){
            fix.push_back(s[start]);
        }
        string res;
        for(char i: fix){
            res.push_back(i);
        }
        return res;
    }
    
    //Brute-forec O(n^2) approach
    //122/123
    string shortestPalindrome_0(string s) {
        int i = s.size()-1;
        for(;i>=0;i--){
            bool pali = true;
            int end = i;
            int j=0;
            while(j<=end){
                if(s[j++]!=s[end--]){
                    pali = false;
                }
            }
            if(pali==true){
                break;
            }
        }
        string res;
        for(int j=s.size()-1;j>i;j--){
            res.push_back(s[j]);
        }
        for(int j=0;j<s.size();j++){
            res.push_back(s[j]);
        }
        return res;
    }
    
    string shortestPalindrome_1(string s){
        int base = 26;
        long fromLeft{0};
        long fromRight{0};
        long power{1};
        long lastIndex{0};
                //int mod = pow(10,9)+7;
        for(int i=0;i<s.size();i++){
            fromLeft *= base ;
            fromLeft += (s[i]-97+1) ;
            fromRight += ((s[i]-97+1)*power) ;
            power *= base; //% mod;
                    //fromLeft%=mod;
                    //fromRight%=mod;
                    
            if(fromLeft==fromRight){
                lastIndex=i;
            }
        }
        string red;
        for(int i=s.size()-1;i>lastIndex;i--){
            red.push_back(s[i]);
        }
        for(int i=0;i<s.size();i++){
            red.push_back(s[i]);
        }
        return red;
    }
    string shortestPalindrome_2(string s){
        int base = 26;
        long fromLeft{0};
        long fromRight{0};
        long power{1};
        long lastIndex{0};
        int mod = (int)pow(10,9)+7;
        for(int i=0;i<s.size();i++){
            fromLeft *= base ;
            fromLeft %= mod;
            fromLeft += (s[i]-97+1) ;
            fromLeft %= mod;
            fromRight += ((s[i]-97+1)*power) ;
            fromRight%= mod;
            power *= base;
            power %= mod;
            
            if(fromLeft==fromRight){
                lastIndex=i;
            }
        }
        string red;
        for(int i=s.size()-1;i>lastIndex;i--){
            red
                .push_back(s[i]);
        }
        for(int i=0;i<s.size();i++){
            red
                .push_back(s[i]);
        }
        return red;
    }
    
};

int main(int argc, char** argv){
    Solution s;
    cout << s.shortestPalindrome_1("aacecaaa") << "\n";
    cout << s.shortestPalindrome_1("abcd") << "\n";
}

//Understand the following code
class Solution {
public:
    vector<int>z_function(string s){
        int n=s.length();
        vector<int>z(n,0);
        int l=0,r=0;
        for(int i=1;i<n;i++){
            if(r>i){
                z[i]=min(z[i-l],r-i);
            }
            while(i+z[i]<n && s[i+z[i]]==s[z[i]])z[i]++;
            if(i+z[i]>r){
                l=i;
                r=i+z[i];
            }
        }
        return z;
    }
    string shortestPalindrome(string s) {
        int n=s.length();
        string t=s;
        reverse(t.begin(),t.end());
        t=s+"#"+t;
        vector<int>z=z_function(t);
        int mxpal=0;
        for(int i=0;i<n;i++){
            if(z[2*n-i]==i+1){
                mxpal=i+1;
            }
        }
        string ans=s.substr(mxpal,n-mxpal);
        reverse(ans.begin(),ans.end());
        return ans+s;
    }
};
