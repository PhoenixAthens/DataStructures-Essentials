//{ Driver Code Starts
// Initial template for C++

#include <vector>
#include <iostream>

using std::cout;
using std::vector;
using std::cin;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        int factorial = 1;
        for(int i=2;i<=n;i++){
            factorial+=i;
        }
        for(int i: arr){
            factorial-=i;
        }
        return factorial;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.missingNumber(n, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends
