#include <iostream>
#include <vector>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::array;

class Solution {
  public:
    void frequencyCount(vector<int>& arr, int N, int P) {
        vector<int> hash(N,0);
        for(int i: arr){
            if(i<=N){
                hash[i-1]++;
            }
        }
        arr = hash;
};

int main() {
    long long t;
    cin >> t;

    while (t--) {

        int N, P;
        cin >> N;

        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        ob.frequencyCount(arr, N, P);

        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
