#include <iostream>
#include <vector>
using std::cout;
using std::ios;
using std::cin;
using std::min;
using std::vector;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
int main(){
    int t;
    cin >> t;
    while(t>0){
        int lengthOfArr, desMedian;
        
        cin >> lengthOfArr >> desMedian;
        
        if(lengthOfArr==1){
            if(desMedian==1){
                cout << 1 << "\n" << 1 << "\n";
            }else{
                cout << -1 <<"\n";
            }
            t--;
            continue;
        }
        
        int med = ceil(lengthOfArr/2);
        int i=lengthOfArr;
        int m = 1;
        for(;i>=1;i--){
            if(lengthOfArr%i==0){
                int size = lengthOfArr/i;
                int medians = ceil(size/2);
                vector<int> media;
                for(int i=1;i<lengthOfArr;i+=medians){
                    media.push_back(i);
                }
                if(media[ceil(i/2)]==desMedian){
                    m = i;
                    break;
                }
            }
        }
        if(m==1 && med==desMedian){
            cout << 1 << "\n";
            for(int i=1;i<=lengthOfArr;i++){
                cout << i << " ";
            }
            cout << "\n";
        }else if(m>1){
            cout << m << "\n";
            int jump = lengthOfArr/m;
            for(int i=1;i<lengthOfArr;i+=jump){
                cout << i << " ";
            }
            cout << "\n";
        }else{
            cout << -1 <<"\n";
        }
        
    }
}
