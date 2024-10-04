#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mod_map;
        for(int i=0;i<arr.size();i++){
            mod_map[arr[i]%k]=i;
        }
        for(int i=0;i<arr.size();i++){
            int mod = i%k;
            if(mod_map[k-mod]==i)return false;
        }
        return true;
    }
};
