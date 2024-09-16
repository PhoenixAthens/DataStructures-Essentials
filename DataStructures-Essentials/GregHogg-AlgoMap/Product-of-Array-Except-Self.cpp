#include <vector>
#include <iostream>
using std::vector;
using std::cout;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int frwdProd[nums.size()+1];
        int bwrdProd[nums.size()+1];
        frwdProd[0] = 1;
        bwrdProd[nums.size()] = 1;
        for(int i = 0;i < nums.size();i++){
            int startIndex = i+1;
            int endIndex = nums.size()-1-i;
            frwdProd[startIndex]=frwdProd[startIndex-1]*nums[i];
            bwrdProd[endIndex] = bwrdProd[endIndex+1]*nums[nums.size()-1-i];
        }
        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++){
            result[i]=frwdProd[i]*bwrdProd[i+1];
        }
        return result;
    }
    vector<int> productExceptSelf_2(vector<int>& nums){
        vector<int> prod_array(nums.size(),1);
        int left_prod = 1;
        int right_prod = 1;
        for(int i=0;i<nums.size();i++){
            prod_array[i] *= left_prod;
            left_prod *= nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            prod_array[i] *= right_prod;
            right_prod *= nums[i];
        }
        return prod_array;
    }
};

int main(int argc, char** argv){
    vector<int> nums{1,2,3,4};
    int frwdProd[nums.size()+1];
    int brwdProd[nums.size()+1];
    frwdProd[0] = 1;
    brwdProd[nums.size()] = 1;
    for(int i = 0;i < nums.size();i++){
        int startIndex = i+1;
        int endIndex = nums.size()-1-i;
        frwdProd[startIndex]=frwdProd[startIndex-1]*nums[i];
        brwdProd[endIndex] = brwdProd[endIndex+1]*nums[nums.size()-1-i];
    }
    for(int i=0;i<nums.size()+1;i++){
        cout << frwdProd[i] << " ";
    }
    cout << "\n";
    for(int i=0;i<nums.size()+1;i++){
        cout << brwdProd[i] << " ";
    }
    cout << "\n";
    
}
