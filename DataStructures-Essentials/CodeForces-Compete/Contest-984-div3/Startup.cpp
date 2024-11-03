#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <utility>
using std::unordered_map;
using std::vector;
using std::cout;
using std::cin;
using std::pair;
bool Comparator(pair<int,int> a, pair<int,int> b){
    if(a.second<=b.second)return true;
    if(a.second > b.second) return false;
    return false;
}
//comparator that ensure it provides strict weak ordering
bool comp2(pair<int,int> a, pair<int,int> b){
    if(a.second!=b.second){
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main(){
    int t;
    cin >> t;
    int numOfShelves, bottles;
    while(t>0){
        unordered_map<int, int> mapp;
        cin >> numOfShelves >> bottles;
        for(int i=0;i<bottles;i++){
            int a, b;
            cin >> a >> b;
            if(mapp.find(a)!=mapp.end()) mapp[a]+=b;
            else mapp[a]=b;
        }
        vector<pair<int,int>> vec;
        for(auto a: mapp){
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end(),comp2);
        int maxCost = 0;
        for(int i=numOfShelves, j=vec.size()-1;i>0 && j>=0;i--,j--){
            maxCost+=vec[j].second;
        }
        cout << maxCost << "\n";
        t--;
    }
}
