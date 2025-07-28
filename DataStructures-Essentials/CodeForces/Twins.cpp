#include <iostream>
#include <algorithm>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::sort;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<int> nums(n);
    int sum{0};
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        sum+=a;
        nums[i]=a;
    }
    sort(nums.begin(),nums.end());
    int tempSum{0};
    for(int i=n-1;i>=0;i--){
        tempSum+=nums[i];
        if(tempSum>(sum-tempSum)){
            cout<<n-i<<"\n";
            return 0;
        }
    }
    
}
