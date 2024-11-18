//{ Driver Code Starts
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    int countTrips(vector<vector<int>> &locations) {
        sort(locations.begin(),locations.end());
        vector<vector<int>> store;
        for(int i=1;i<locations.size();i++){
            if(locations[i][0]==locations[i-1][1]){
                store.back()[1]=locations[i][1];
            }else{
                store.push_back(locations[i]);
            }
        }
        return store.size();
    }
};


//{ Driver Code Starts.

int main() {
    Solution s;
    vector<vector<int>> v1 {{0,0},{1,2},{2,4},{-3,6},{-1,-2}};
    vector<vector<int>> v2 {{0,0},{1,2},{2,4},{-3,6},{4,8}};
    cout << s.countTrips(v1)<< "\n";
    cout << s.countTrips(v2)<< "\n";
//    int t;
//    scanf("%d ", &t);
//    while (t--) {
//
//        
//        int n;
//        scanf("%d", &n);
//
//        vector<vector<int>> locations(n, vector<int>(2));
//        Matrix::input(locations, n, 2);
//
//        Solution obj;
//        int res = obj.countTrips(locations);
//
//        cout << res << endl;
//        cout << "~" << endl;
//    }
}

// } Driver Code Ends
