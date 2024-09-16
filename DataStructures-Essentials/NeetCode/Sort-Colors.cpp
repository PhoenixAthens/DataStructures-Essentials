#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
using std::swap;
void sort_colors_1(vector<int>& nums){ //2-pass solution!
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]==0){
            swap(nums[j], nums[i++]);
        }
    }
    for(int j=i;j<nums.size();j++){
        if(nums[j]==1){
            swap(nums[j], nums[i++]);
        }
    }
}
void sort_colors_2(vector<int>& nums){
    int i=0,l=0;
    int r = nums.size()-1;
    while(i<=r){
        if(nums[i]==0){
            swap(nums[i++],nums[l++]);
        }else if(nums[i]==2){
            swap(nums[i],nums[r--]);
        }else{
            i++;
        }
    }
}
int main(int argc, char** argv){
    vector<int> vecMain = {2,0,2,1,1,0};
    sort_colors_2(vecMain);
    for(int i: vecMain){
        cout << i << " ";
    }
    cout << "\n";
}
