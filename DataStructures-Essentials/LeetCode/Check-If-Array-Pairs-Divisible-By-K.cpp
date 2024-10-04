#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::ios;
using std::vector;
using std::sort;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

class Solution {
    struct Comparator{
        int k;
        Comparator(int k){
            this->k=k;
        }
        bool operator () (int i, int j){
            return (k+i%k)%k < (k+j%k)%k;
        }
    };
public:
    bool canArrange(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end(),Comparator(k));
        int start = 0, end=arr.size()-1;
        while(start<end){
            if(arr[start]%k!=0)break;
            if(arr[start+1]%k!=0)return false;
            start+=2;
        }
        while(start<end){
            if((arr[start]+arr[end])%k!=0)return false;
            start++;
            end--;
        }
        return true;
    }
};
int main(int argc, char** argv){
    vector<int> vec {1,2,3,4,5,10,6,7,8,9};
    int k=5;
    //sort(vec.begin(),vec.end(),Comparator(k));
    for(int i: vec){
        cout << i << " ";
    }
    cout <<"\n"; //5 10 1 6 2 7 3 8 4 9 
}
