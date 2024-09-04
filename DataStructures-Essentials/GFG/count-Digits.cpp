#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

class Solution{
public:
    int evenlyDivides(int N){
        vector<int> nums;
        int N_copy = N;
        while(N_copy!=0){
            nums.push_back(N_copy%10);
            N_copy/=10;

        }
        
        int count{0};
        for(int i: nums){
            if(i!=0 && N%i==0)count++;
        }
        return count;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}

