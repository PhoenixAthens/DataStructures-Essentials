//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
#include <vector>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        long long maxSum = INT_MIN;
        bool allNeg = true;
        for(auto& i: arr){
            if(i>0)allNeg = false;
            maxSum = i>maxSum?i:maxSum;
        }
        if(allNeg)return maxSum;
        maxSum = INT_MIN;
        long long runningSum = 0;
        for(auto& i: arr){
            runningSum = runningSum+i;
            if(runningSum<0){
                runningSum = 0;
            }else{
                maxSum = runningSum>maxSum?runningSum:maxSum;
            }
        }
        return maxSum;
        // code here...
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends
