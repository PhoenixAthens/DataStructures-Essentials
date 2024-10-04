#include <vector>
#include <iostream>
#include <string>
#include <set>
using std::string;
using std::vector;
using std::multiset;
using std::cout;

class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        multiset<string> mlSet;
        vector<vector<string>> indexBasedCount(words.size());
        vector<int> res(words.size());
        int i=0;
        for(string s: words){
            while(s.size()!=0){
                mlSet.insert(s);
                indexBasedCount[i].push_back(s);
                s.pop_back();
            }
            i++;
        }
        i = 0;
        for(vector<string>& vec: indexBasedCount){
            for(string str: vec){
                res[i]+=mlSet.count(str);
            }
            i++;
        }
        return res;
    }
};

int main(int argc, char** argv){
    vector<string> words{"abc","ab","bc","b"};
    Solution s;
    vector<int> res = s.sumPrefixScores(words);
    for(int i : res){
        cout << i << " ";
    }
    cout <<"\n";
    
    
    
    
}
