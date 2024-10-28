#include <iostream>
#include <sstream>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long minOps(long long a, long long b, long long c) {
        double firstSum = (c+a-2*b);
        double secondSum = (b+c-2*a);
        double thirdSum = (a+b-2*c);
        firstSum/=2;
        secondSum/=2;
        thirdSum/=2;
        firstSum = ceil(abs(firstSum));
        secondSum = ceil(abs(secondSum));
        thirdSum = ceil(abs(thirdSum));
        return min(firstSum,min(secondSum,thirdSum));
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        long long a;
        scanf("%lld", &a);

        long long b;
        scanf("%lld", &b);

        long long c;
        scanf("%lld", &c);

        Solution obj;
        long long res = obj.minOps(a, b, c);

        cout << res << endl;
    }
}

// } Driver Code Ends
