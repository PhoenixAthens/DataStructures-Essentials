#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::sort;
int main(){
    int t;
    cin >> t;
    int n,k;
    while(t--){
        cin >> n >> k;
        vector<int> vec1(n);
        for(int i=0;i<n;i++)cin >> vec1[i];
        sort(vec1.begin(),vec1.end());
        int coins{0};
        for(int i=n-1;i>0 && k!=0;i--){
            k-=vec1[i];
            if(k<vec1[i-1]){
                coins = k;
                k=0;
                break;
            }
        }
        if(k>0){
            k-=vec1[0];
            coins = k;
        }
        cout << coins << "\n";
    }
}
