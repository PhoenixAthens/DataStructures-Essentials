#include <iostream>
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
    int isPossible(int n, vector<int> &arr) {
                vector<int> prodArr;
                
                prodArr.push_back(arr[0]);
                for(int i=1;i<arr.size();i++){
                    prodArr.push_back(arr[i]*prodArr.back());
                }
                int rightProd = arr[n-1];
        n-=2;
        bool flag = false;
                for(int i=prodArr.size()-2;i>=0;i--){
                    if((rightProd/prodArr[i])/10==0)flag=true;
                        else{
                            rightProd*=arr[n--];
                        }
                }
        if(flag)return 1;
        else return 0;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.isPossible(n, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends
