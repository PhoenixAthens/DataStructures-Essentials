//{ Driver Code Starts
#include <iostream>
#include <unordered_map>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getOperations(string s) {
        unordered_map<char, int> u_map;
        for(char c: s){
            if(u_map.find(c)!=u_map.end()){
                u_map[c]++;
            }else{
                u_map[c]=1;
            }
        }
        int cnt = 0;
        for(auto a: u_map){
            cnt+=a.second/3;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        int res = obj.getOperations(s);

        cout << res << endl;
    }
}

// } Driver Code Ends
