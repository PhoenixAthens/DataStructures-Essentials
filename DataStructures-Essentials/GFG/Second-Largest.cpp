#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::string;
using std::getline;
using std::cin;
using std::vector;

class Solution {
private:
    inline int maxMe(int A, int B){
        return A>=B?A:B;
    }
    inline int minMe(int A, int B){
        return A<=B?A:B;
    }
  public:
    int print2largest(vector<int> &arr) {
        int first = maxMe(arr[0],arr[1]);
        int second = minMe(arr[0],arr[1]);
        for(int i=2;i<arr.size();i++){
            if(arr[i]>first){
                second=first;
                first=arr[i];
            }else if(arr[i]>second && arr[i]!=first){
                second=arr[i];
            }
        }
        return second==first?-1:second;
    }
    int print2largest_2(vector<int> &arr) {
        int max = INT_MIN;
        for(int i: arr){
            if(i>max)max=i;
        }
        int max_2=INT_MIN;
        for(int i:arr){
            if(i!=max){
                max_2=(i>max_2)?i:max_2;
            }
        }
        return max_2==INT_MIN?-1:max_2;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}
