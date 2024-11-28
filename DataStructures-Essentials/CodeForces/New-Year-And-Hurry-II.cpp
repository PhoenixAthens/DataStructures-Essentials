#include <iostream>
using std::cout;
using std::cin;
int M(int n){
    int total{0};
    for(int i=1;i<=n;i++)total+=5*i;
    return total;
}
int bin_do(int l,int r, int k){
    int res=-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(M(mid)<=240-k){
            res = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    return res;
}
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    int res = bin_do(1,n,k);
    if(res==-1){
        cout << 0 << "\n";
    }else{
        cout << res << "\n";
    }
}
