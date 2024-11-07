#include <iostream>
#include <vector>
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
    int minXOR(int n, int k, vector<int> &arr) {
//        vector<int> prodArr;
//        int n = arr.size();
//        prodArr.push_back(arr[0]);
//        for(int i=1;i<arr.size();i++){
//            prodArr.push_back(arr[i]*prodArr.back());
//        }
//        int rightProd = arr[n-1];
//        
//        for(int i=prodArr.size()-2;i>=0;i--){
//            if(right)
//        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int k;
        scanf("%d", &k);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.minXOR(n, k, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends
