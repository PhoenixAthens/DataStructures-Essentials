#include <iostream>
#include <unordered_map>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::unordered_map;
auto _=[]()noexcept{std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    while(t--){
        unordered_map<int,int> umap;
        umap[0]=0;
        int n;
        cin >> n;
        while(n--){
            int temp;
            cin >> temp;
            if(umap.find(temp)!=umap.end())umap[temp]++;
            else umap[temp]=1;
        }
        int max{-1};
        for(auto i:umap){
            if(i.second>=3){
                max=i.first;
                break;
            }
        }
        cout<<max<<"\n";
    }
}
