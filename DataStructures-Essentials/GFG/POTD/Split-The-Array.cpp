#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
using namespace std;

//9/114 (TLE)
class Solution {
  public:
    unordered_map<int, int> mapOfCounts;
    void subArr(int index, vector<int>& curr, vector<int>& givenArr){
        if(index >= givenArr.size() ){
            if(!curr.empty()){
                int xorPD=curr[0];
                for(int i=1;i<curr.size();i++)
                    xorPD = xorPD ^ curr[i];
                if(mapOfCounts.find(xorPD)!=mapOfCounts.end()){
                    mapOfCounts[xorPD]++;
                }else{
                    mapOfCounts[xorPD]=1;
                }
            }
            return;
        }
        curr.push_back(givenArr[index]);
        subArr(index+1, curr, givenArr);
        curr.pop_back();
        subArr(index+1, curr, givenArr);
    }
    int countgroup(vector<int>& arr) {
        vector<int> emptyVec;
        subArr(0, emptyVec, arr);
        int cnt = 0;
        for(auto a: mapOfCounts){
            cnt+=a.second/2;
        }
        return cnt;
    }
    
    
};

//{ Driver Code Starts.
int main() {
//    string ts;
//    getline(cin, ts);
//    int t = stoi(ts);
//    while (t--) {
//        vector<int> arr;
//        string input;
//        getline(cin, input);
//        stringstream ss(input);
//        int number;
//        while (ss >> number) {
//            arr.push_back(number);
//        }
//        Solution obj;
//        int ans = obj.countgroup(arr);
//        cout << ans << endl;
//    }
    Solution s;
    vector<int> v {5, 5, 1, 1, 3, 3};
    cout << s.countgroup(v) << "\n";
    
}

// } Driver Code Ends
