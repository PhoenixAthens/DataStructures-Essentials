#include <iostream>
#include <vector>
#include <algorithm>
using std::sort;
using std::vector;
using std::max;
using std::min;
class Solution{
public:
    int calcGCD(vector<int> nums){
        int i=0;
        while(i!=nums.size()-1){
            int gc = gcd(max(nums[i],nums[i+1]),min(nums[i],nums[i+1]));
            nums[i+1]=gc;
            i++;
        }
        return nums[nums.size()-1];
    }
    int calcLCM(vector<int> nums, int gcd){
        for(int i=0;i<nums.size()-1;i++){
            int lcm = (nums[i]+nums[i+1])/gcd;
            nums[i+1]=lcm;
        }
        return nums[nums.size()-1];
    }
    int gcd(int a, int b){
        if(b==0){
            return a;
        }else{
            int temp = b;
            b = a%b;
            int a = temp;
            return gcd(a,b);
        }
    }
    long long maxScore(vector<int>& nums){
        if(nums.size()==1)return nums[0];
        sort(nums.begin(),nums.end());
        int gcd = calcGCD(nums);
        int mf1 = gcd * calcLCM(nums, gcd);
        nums.erase(nums.begin(),nums.begin()+1);
        int gcd2 = calcGCD(nums);
        int mf2 = gcd2 * calcLCM(nums,gcd2);
        return max(mf1,mf2);
    }
};
int main(int argc, char** argv){
    Solution s;
    vector<int> v {1,2,3,4,5};
    s.calcGCD(v);
    for(int i: v)std::cout<<i<<" ";
    std::cout<<"\n";
    
}
