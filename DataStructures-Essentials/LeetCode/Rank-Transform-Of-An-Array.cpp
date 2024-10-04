#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using std::sort;
using std::vector;
using std::map;
using std::min;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> copy(arr);
        sort(copy.begin(),copy.end());
        map<int,int> hash;
        int idx = 1;
        for(int i: copy){
            hash[i]=hash[i]==0?idx++:min(hash[i],idx);
            //idx++;
        }
        idx = 0;
        for(int i: arr){
            copy[idx++]=hash[i];
        }
        return copy;
    }
};
int main(int argc, char** argv){
    vector<int> v {37,12,28,9,100,56,80,5,12};
    Solution s;
    vector<int> res = s.arrayRankTransform(v);
    for(int i: res){
        std::cout << i << " ";
    }
    std::cout <<"\n";
}
