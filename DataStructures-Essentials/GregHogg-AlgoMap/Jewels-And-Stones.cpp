#include <iostream>
using std::string;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int arr[52];
        for(char c: stones){
            if(c>97){
                arr[c-'a'+26]++;
            }else{
                arr[c-'A']++;
            }
        }
        int cnt{0};
        for(char c: jewels){
            if(c>97){
                cnt+=arr[c-'a'+26];
            }else{
                cnt+=arr[c-'A'];
            }
        }
        return cnt;
    }
};
