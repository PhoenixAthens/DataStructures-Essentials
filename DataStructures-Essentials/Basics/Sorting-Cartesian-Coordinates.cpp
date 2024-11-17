#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using std::vector;
using std::pair;
using std::sort;
template <class T>
bool compCartesian(pair<T,T> a, pair<T,T> b){
    if(a.first < b.first)return true;
    else if(a.first > b.first)return false;
    else return a.second < b.second;
}
vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    sort(v.begin(),v.end(),compCartesian<int>);
    return v;
}
