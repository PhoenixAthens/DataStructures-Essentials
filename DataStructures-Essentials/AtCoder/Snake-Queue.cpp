#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using std::cout;
using std::cin;
using std::vector;
int main(){
    std::ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int q;
    cin >> q;
    vector<int> keepCnt;
    keepCnt.push_back(0);
    int head = 1;
    int sub = 0;
    while(q--){
        int a,b;
        cin >> a;
        if(a==1){
            cin >> b;
            keepCnt.push_back(keepCnt.back()+b);
        }else if(a==3){
            cin >> b;
            cout << (keepCnt[head+b-2]-sub) << "\n";
        }else if(a==2){
            int val = keepCnt[head];
            for(int i=1;i<keepCnt.size();i++)keepCnt[i]-=val;
            head++;
        }
    }
}

