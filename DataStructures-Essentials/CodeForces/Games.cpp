#include <iostream>
#include <unordered_map>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::unordered_map;
int main(){
    int n;
    cin >> n;
    int in,out;
    unordered_map<int,int> out_collect;
    vector<int> in_collect;
    while(n--){
        cin >> in >> out;
        in_collect.push_back(in);
        if(out_collect.find(out)!=out_collect.end()){
            out_collect[out]++;
        }else{
            out_collect[out]=1;
        }
    }
    int ans{0};
    for(int i:in_collect){
        if(out_collect.find(i)!=out_collect.end())ans+=out_collect[i];
    }
    cout << ans << "\n";
    
}
