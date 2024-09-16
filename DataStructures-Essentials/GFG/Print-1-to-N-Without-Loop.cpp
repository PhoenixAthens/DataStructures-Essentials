#include <iostream>
using std::cout;
using std::cin;

class Solution{
private:
    int start{1};
public:
    void printNos(int N){
        if(start>N)return;
        cout<<start++<<" ";
        printNos(N);
    }
};

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int N;
        
        cin>>N;
        Solution ob;
       
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

