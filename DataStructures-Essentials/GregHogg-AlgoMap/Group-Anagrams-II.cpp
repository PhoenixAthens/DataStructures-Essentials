#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using std::string;
using std::vector;
using std::map;
using std::sort;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string,int> store;
        int index = 0;
        for(string s: strs){
            string copyOfS = s;
            sort(s.begin(),s.end());
            if(store.find(s)!=store.end()){
                result[store[s]].push_back(copyOfS);
            }else{
                store[s]=index++;
                result.push_back(vector<string>{copyOfS});
            }
        }
        return result;
    }
};
int main(int argc, char** argv){
    Solution s;
    vector<string> vec{"eat","tea","tan","ate","nat","bat"};
    s.groupAnagrams(vec);
}
