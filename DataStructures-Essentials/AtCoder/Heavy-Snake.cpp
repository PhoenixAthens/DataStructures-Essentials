#include <iostream>
#include <vector>
#include <utility>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::vector;
using std::pair;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d;
    cin >> n >> d;
    vector<pair<int,int>> vec;
    int n_copy=n;
    while(n_copy--){
        int w,l;
        cin >> w >> l;
        vec.push_back({w,l});
    }
    for(int i=1;i<=d;i++){
        int max{0};
        for(int j=0;j<n;j++){
            int weight = vec[j].first * (vec[j].second+i);
            if(weight>max)max=weight;
        }
        cout << max << "\n";
    }
}

