#include <vector>
#include <iostream>
#include <set>
#include <sstream>
using std::cout;
using std::vector;
using std::string;
using std::set;
using std::multiset;
using std::stringstream;
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        multiset<string> allWords;
        string current;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==' '){
                allWords.insert(current);
                current.clear();
            }
            else{
                current.push_back(s1[i]);
            }
        }
        allWords.insert(current);
        current.clear();
        for(int i=0;i<s2.size();i++){
            if(s2[i]==' '){
                allWords.insert(current);
                current.clear();
            }
            else{
                current.push_back(s2[i]);
            }
        }
        allWords.insert(current);
        vector<string> ans;
        for(auto i: allWords){
            if(allWords.count(i)==1)ans.push_back(i);
        }
        return ans;
    }
    vector<string> uncommonFromSentences_2(string s1, string s2) {
        multiset<string> allWords;
        string current;
        stringstream ss1(s1);
        stringstream ss2(s2);
        while(ss1 >> current){
            allWords.insert(current);
        }
        while(ss2 >> current){
            allWords.insert(current);
        }
        vector<string> ans;
        for(auto i: allWords){
            if(allWords.count(i)==1)ans.push_back(i);
        }
        return ans;
    }
};

int main(int argc, char** argv){
    Solution s;
    vector<string> a = s.uncommonFromSentences("this apple is sweet", "this apple is sour");
    for(string i: a){
        cout << i << " ";
    }
    cout <<"\n";
}
