#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::vector;
int binary(vector<int>& v, int start, int end, int find){
    if(start>=end)return 0;
    int mid = end-(start+end)/2;
    if(v[mid]>=find)return mid;
    else return binary(v,mid+1,end,find);
}
//6
//2 3 4 4 7 10
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        v[i]=temp;
    }
    int cnt{0};
    for(int i=0;i<n;i++){
        int val_index{0};
        val_index = (n-binary(v,i+1,n-1,2*v[i]));
        if(val_index==0)break;
        
    }
    cout << cnt << "\n";
}
