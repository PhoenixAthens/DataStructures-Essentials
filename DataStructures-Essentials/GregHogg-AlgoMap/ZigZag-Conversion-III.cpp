#include <vector>
#include <iostream>
using std::vector;
using std::ios;
using std::cout;
using std::cin;
using std::string;

#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> make(numRows);
        int i=0;
        int d=1;
        for(char c: s){
            make[i].push_back(c);
            if(i==0)d=1;
            else if(i==numRows-1)d=-1;
            i+=d;
        }
        string result;
        for(vector<char> v: make){
            for(char c: v){
                result.push_back(c);
            }
        }
        return result;
    }
};

