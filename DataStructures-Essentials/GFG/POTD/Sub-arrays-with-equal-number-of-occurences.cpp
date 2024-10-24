#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        //int bg {123'1233'134};
        int cnt =0;
        int oneTwoArr[2]{0};
        for(int i: arr){
            if(i==x)oneTwoArr[0]++;
            else if(i==y)oneTwoArr[1]++;
        }
        if(oneTwoArr[0]==oneTwoArr[1])cnt++;
        int i=1;
        vector<int> pushMe;
        pushMe.push_back(arr[0]);
        for(;i<arr.size();){
            if(arr[0]!=arr[1]){
                pushMe.push_back(arr[i]);
                i++;
            }else{
                pushMe.erase(pushMe.begin(),pushMe.begin()+1);
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        string ks1;
        getline(cin, ks1);
        int y = stoi(ks1);
        Solution ob;
        int ans = ob.sameOccurrence(arr, x, y);
        cout << ans << "\n";
        // cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends
