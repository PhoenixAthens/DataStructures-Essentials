//{ Driver Code Starts
#include <iostream>
#include <sstream>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long minCost(int n, vector<int> &a) {
        long long costE{0}, costO{0};
        for(int i:a){
            if(i%2==0){
                costE+=i;
            }else{
                costO+=i;
            }
        }
        return min(costO,costE);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        Solution s;
        cout << s.minCost(n, arr) << "\n";
    }
}

// } Driver Code Ends
