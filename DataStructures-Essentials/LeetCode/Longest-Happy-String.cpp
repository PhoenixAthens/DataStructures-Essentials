#include <iostream>
#include <queue>
#include <utility>
using std::cout;
using std::priority_queue;
using std::pair;
using std::string;
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(a>0)pq.push({a,'a'});
        if(b>0)pq.push({b,'b'});
        if(c>0)pq.push({c,'c'});
        string ans = "";
        while(!pq.empty()){
            pair<int,char> topElem = pq.top();
            pq.pop();
            int count  = topElem.first;
            char topChar = topElem.second;
            int lenOfAns = ans.length();
            if( lenOfAns >=2 and ans[lenOfAns-1]==topChar and ans[lenOfAns-2]==topChar){
                if(pq.empty())break;
                
                pair<int,char> temp = pq.top();
                pq.pop();
                ans.push_back(temp.second);
                temp.first--;
                if(temp.first>0){
                    pq.push({temp.first,temp.second});
                }
                
            }else{
                count--;
                ans.push_back(topChar);
            }
            if(count>0)
                pq.push({count,topChar});
        }
        return ans;
    }
};

int main(int argc, char** argv){
    Solution s;
    s.longestDiverseString(1, 1, 7);
}
