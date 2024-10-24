#include <iostream>
#include <sstream>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int countgroup(vector<int>& arr) {
        int xorA{arr[0]};
        int n = arr.size()-1;
        for(int i=1;i<=n;i++){
            xorA = xorA xor arr[i];
        }
        if(xorA!=0){
            
            return static_cast<int>(pow(2.0,n))-1;
        }
        return 0;
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
        Solution obj;
        int ans = obj.countgroup(arr);
        cout << ans << endl;
    }
}

// } Driver Code Ends
