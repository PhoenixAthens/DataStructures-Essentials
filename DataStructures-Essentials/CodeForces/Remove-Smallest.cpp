#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::sort;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)cin >> vec[i];
        sort(vec.begin(),vec.end());
        int rem{0};
        for(int i=0;i<n-1;i++){
            if((vec[i+1]-vec[i])<=1)rem++;
        }
        cout << ((n-rem)==1?"YES\n":"NO\n");
    }
}
