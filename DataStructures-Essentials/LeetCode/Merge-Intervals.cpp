#include <vector>
#include <iostream>
#include <algorithm>
using std::cout;
using std::vector;
using std::sort;
using std::begin;
using std::end;
using std::max;
class Solution {
    
public:
    static bool comp(vector<int> a, vector<int> b){
        if(a[0]<b[0])return true;
        else return false;
    }
    //126ms
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>> results;
        results.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int>& last = *(results.end()-1);
            if(last[1] < intervals[i][0]){
                results.push_back(intervals[i]);
            }else{
                last[1]=max(last[1],intervals[i][1]);
            }
        }
        return results;
    }
    //without using comparator (17ms)
    vector<vector<int>> merge2(vector<vector<int>>& intervals) {
        sort(intervals.begin(),
             intervals.end());
        vector<vector<int>> results;
        results
            .push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            vector<int>& last = *(results.end()-1);
            if(last[1] < intervals[i][0]){
                results
                    .push_back(intervals[i]);
            }else{
                last[1]=max(last[1],
                            intervals[i][1]);
                }
            }
            return results;
        }
};
bool comp2(vector<int> a, vector<int> b){
    if(a[1]<b[1])return true;
    else if(a[1]==b[1]){
        if(a[0]<b[0])return true;
        else return false;
    }
    else return false;
}

int main(int argc, char** argv){
//    vector<vector<int>> multiVec {{1,3},{2,6},{8,10},{15,18}};
//    vector<vector<int>> multiVec_2 {{1,4},{4,5}};
//    Solution s;
//    vector<vector<int>> res = s.merge(multiVec);
//    for(auto a: res){
//        for(int i: a){
//            cout << i << " ";
//        }
//        cout << "\n";
//    }
//    vector<vector<int>> res_2 = s.merge(multiVec_2);
//    for(auto a: res_2){
//        for(int i: a){
//            cout << i << " ";
//        }
//        cout << "\n";
//    }
    //vector<vector<int>> multiDim {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> multiDim {{1,4},{0,4}};
    sort(multiDim.begin(),multiDim.end(),comp2);
    for(auto a: multiDim){
        cout << a[0] << "," << a[1] << "\n";
    }
    
    
}
//[[1,3],[2,6],[8,10],[15,18]]
//1,2,3,6,8,10,15,18
//
