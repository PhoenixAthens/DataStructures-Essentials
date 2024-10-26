#include <iostream>
using std::cout;
using std::cin;
using std::ios;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int tc;
    cin >> tc;
    while(tc>0){
        int dim;
        cin >> dim;
        int arr[dim][dim];
        for(int i=0;i<dim;i++){
            for(int j=0;j<dim;j++){
                cin >> arr[i][j];
            }
        }
        int cnt{0};
        for(int i=0;i<dim;i++){
            for(int j=0;j<dim;j++){
                if(arr[i][j]<0){
                    int minInD = INT_MAX;
                    int r = i, c = j;
                    while(r<dim && c<dim){
                        minInD=std::min(minInD,arr[r][c]);
                        arr[r][c]=1;
                        r++;
                        c++;
                    }
                    cnt+=std::abs(minInD);
                }
            }
        }
        cout << cnt << "\n";
        tc--;
    }
}
