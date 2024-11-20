#include <iostream>
#include <vector>
using std::vector;
using std::max;
using std::cout;
using std::min;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxCapacity{0};
        while(l<=r){
            int amount = (r-l)*min(height[l],height[r]);
            maxCapacity = max(amount,maxCapacity);
            if(height[l]<=height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxCapacity;
    }
};
int main(){
    Solution s;
    vector<int> height {1,8,6,2,5,4,8,3,7};
    vector<int> height2 {1,1};
    cout << s.maxArea(height) << "\n";
    cout << s.maxArea(height2) << "\n";
}
