#include <algorithm>
#include <vector>
#include <utility>
using std::vector;
using std::sort;
using std::pair;

template <class T, class V>
bool incDiff(pair<T,V> a, pair<T,V> b){
    return abs(a.first-a.second) <= abs(b.first-b.second);
}

int pairSticks(vector<int> length, int D){
    vector<pair<int,int>> store;
    for(int i=0;i<length.size()-1;i++){
        for(int j=i+1;j<length.size();j++){
            store.push_back({length[i],length[j]});
        }
    }
    int cnt{0};
    sort(store.begin(),store.end(),incDiff<int,int>);
    for(auto i: store){
        if(abs(i.first-i.second)<=D)cnt++;
    }
    return cnt;
}
