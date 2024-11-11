//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int l = 0;
        int r = 1;
        int sum = arr[0];
        while(sum!=target && r<arr.size() && l<arr.size()){
            if(sum<target && r<arr.size()){
                sum+=arr[r++];
            }else if(sum>target && l<arr.size()){
                sum-=arr[l++];
            }
        }
        if(sum==target) return {l+1,r};
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    Solution s;
    vector<int> arr1 {12,18,5,11,30,5};
    vector<int> arr2 {25,3,4,23,23,22,27,9,6,18};
    vector<int> arr3 {38,22,20,12,47,23,18,13,18,47,36,42};
    vector<int> arr4 {7,49,25,18,14,10,29,1,31,19};
    vector<int> arr5 {42,16,39,7,12,3,35};
    
    //vector<int> r1 = s.subarraySum(arr1,69);
    //vector<int> r2 = s.subarraySum(arr2,27);
    vector<int> r3 = s.subarraySum(arr3,174);
    //vector<int> r4 = s.subarraySum(arr4,109);
    vector<int> r5 = s.subarraySum(arr5,23);
    //vector<int> r2 = s.subarraySum(<#vector<int> &arr#>, <#int target#>)
//    cout << r1[0] << ", " << r1[1] << "\n";
//    cout << r2[0] << ", " << r2[1] << "\n";
    cout << r3[0] << ", " << r3[1] << "\n";
//    cout << r4[0] << ", " << r4[1] << "\n";
    if(r5.size()>1){
        cout << r5[0] << ", " << r5[1] << "\n";
    }else{
        cout << r5[0] << "\n";
    }
    return 0;
}

// } Driver Code Ends
