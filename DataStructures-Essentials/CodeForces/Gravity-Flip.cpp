#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::vector;
using std::sort;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    for(auto i: vec)cout<<i<<" ";
    cout<<"\n";
    return 0;
}
