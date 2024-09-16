#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int i=0;
        int jmps=0;
        while(i<arr.size()-1 && arr[i]!=0){
            i+=arr[i];
            jmps++;
        }
        return i<arr.size()-1?-1:jmps;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends
