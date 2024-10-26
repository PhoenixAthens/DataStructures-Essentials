#include <iostream>
#include <vector>
#include <unordered_set>
using std::vector;
using std::cout;
using std::cin;
using std::ios;
using std::string;
using std::unordered_set;
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> fromFolder;
        for(string i: folder)fromFolder.insert(i);
        vector<string> result;
        for(string s: folder){
            bool flag = true;
            string subS(s);
            while(!subS.empty()){
                while(subS.back()!='/'){
                    subS.pop_back();
                }
                subS.pop_back();
                if(fromFolder.find(subS)!=fromFolder.end()){
                    flag=false;
                    break;
                }
            }
            if(flag)result.push_back(s);
        }
        return result;
    }
};
int main(int argc, char** argv){
    Solution s{};
    vector<string> folder1 {"/a", "/a/b", "/c/d", "/c/d/e", "/c/f"};
    vector<string> folder2 {"/a", "/a/b/c", "/a/b/d"};
    vector<string> folder3 {"/a/b/c", "/a/b/ca", "/a/b/d"};
    vector<string> result1 = s.removeSubfolders(folder1);
    for(auto a: result1){
        cout << a << " ";
    }
    cout << "\n";
    vector<string> result2 = s.removeSubfolders(folder2);
    for(auto a: result2){
        cout << a << " ";
    }
    cout << "\n";
    vector<string> result3 = s.removeSubfolders(folder3);
    for(auto a: result3){
        cout << a << " ";
    }
    cout << "\n";
    
}
