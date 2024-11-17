#include <iostream>
#include <vector>
#include <unordered_map>
using std::cout;
using std::cin;
using std::vector;
using std::unordered_map;
class Solution{
public:
    int majorityElement(vector<int>& nums){
        int n = nums.size();
        unordered_map<int, int> u_map;
        for(int i: nums){
            if(u_map.find(i)!=u_map.end()){
                u_map[i]++;
            }else{
                u_map[i]=1;
            }
        }
        for(auto a: u_map){
            if(a.second>=n/2)return a.first;
        }
        return -1;
    }
};
