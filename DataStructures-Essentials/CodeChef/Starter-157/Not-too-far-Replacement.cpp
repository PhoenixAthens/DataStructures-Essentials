#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::ios;
using std::vector;
using std::swap;
using std::min;
using std::swap;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    vector<int> v {20, 100, 30, 49, 15};
    vector<int> v2{v};
    sort(v2.begin(),v2.end());
    //cout << (*std::lower_bound(v2.begin(), v2.end(), 2*15)) << "\n";
    cout << (*std::lower_bound(v2.begin(), v2.end(), 2*30)) << "\n";
    
//    int tc,len;
//    cin >> tc;
//    while(tc>0){
//        vector<int> vec;
//        cin >> len;
//        vec.reserve(len+1);
//        int temp;
//        for(int i=0;i<len+1;i++){
//            cin >> temp;
//            vec.push_back(temp);
//        }
//        int minSum{0};
//        for(int i=0;i<len;i++){
//            minSum+=vec[i];
//        }
//        int swaps{0};
//        for(int i=0;i<len;i++){
//            if(vec[i]<=(2*vec[len])){
//                swaps++;
//            }
//        }
//        if(swaps==0){
//            cout << minSum <<"\n";
//        }else{
//            int tempSum=0;
//            sort(vec.begin(),vec.end());
//            for(int i=0;i<len;i++){
//                tempSum+=vec[i];
//            }
//            cout << tempSum << "\n";
//        }
//        tc--;
//    }
}
