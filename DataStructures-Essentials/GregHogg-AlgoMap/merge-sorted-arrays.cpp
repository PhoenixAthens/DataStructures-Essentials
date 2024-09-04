#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1_p = m-1;
        int nums2_p = n-1;
        for(int i = nums1.size()-1; i >=0 ; i--){
            if(nums1_p<0){
                nums1[i]=nums2[nums2_p--];
            }else if(nums2_p<0){
                break;
            }else if(nums1[nums1_p] > nums2[nums2_p]){
                nums1[i] = nums1[nums1_p--];
            }else{
                nums1[i] = nums2[nums2_p--];
            }
        }
    }
};
