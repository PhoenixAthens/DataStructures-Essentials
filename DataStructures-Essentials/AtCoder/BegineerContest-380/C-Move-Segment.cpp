#include <iostream>
#include <vector>
#include <utility>
using std::cout;
using std::vector;
using std::cin;
using std::pair;
using std::string;
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<pair<char,int>> vec;
    int index=0;
    int one_blk=0;
    int index_kb = 0;
    for(int i = 0; i < n;){
        int curr = s[i++];
        int cnt = 1;
        while(s[i]==curr){
            cnt++;
            i++;
        }
        if(curr=='1'){
            one_blk++;
            if(one_blk==k-1){
                index_kb=index;
                vec.push_back({curr,cnt});
            }else if(one_blk==k){
                vec[index_kb].second+=cnt;
            }else{
                vec.push_back({curr,cnt});
            }
        }else{
            vec.push_back({curr,cnt});
        }
        index++;
    }
    for(auto& a: vec){
        if(a.first=='0'){
            while(a.second!=0){
                cout << '0';
                a.second--;
            }
        }else{
            while(a.second!=0){
                cout << '1';
                a.second--;
            }
        }
    }
    cout << "\n";
    return 0;
}
