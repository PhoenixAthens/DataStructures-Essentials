#include <iostream>
#include <unordered_map>
using std::unordered_map;
using std::string;
using std::cout;
class Solution {
public:
    int romanToInt(string s) {
        auto value = 0;
        unordered_map<char,int> umap {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int i;
        for(i=s.length()-1;i>0;i--){
            if(umap[s[i-1]]<umap[s[i]]){
                value+=(umap[s[i]]-umap[s[i-1]]);
                i--;
            }else{
                value+=umap[s[i]];
            }
        }
        if(i==0)value+=umap[s[0]];
        return value;
    }
};
int main(){
    Solution s;
    cout << s.romanToInt("MCMXCIV") << "\n";
}
