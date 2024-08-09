#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::ios_base;
using std::swap;
vector<int> kRotate(vector<int> a, int k){
    int len = a.size();
    vector<int> result(len);
    for(int i = 0; i < len; i++){
        int index = (i+k)%len;
        result[index]=a[i];
    }
    return result;
}

//kRotate in-place
void kRotate_2(vector<int> a, int k){
    int len = a.size();
    vector<int> result(len);
    for(int i = 0; i < len; i++){
        int index = (i+k)%len;
        result[index]=a[i];
    }
    for(int i = 0; i < len; i++){
        a[i]=result[i];
    }
}

void kRotate_3(vector<int> nums, int k){
    ios_base::sync_with_stdio(false);
    k = k % nums.size();
    reverse(nums.begin(),nums.begin()+nums.size()-k);
    reverse(nums.begin()+nums.size()-k,nums.end());
    reverse(nums.begin(),nums.end());
}

void kRotate_4(vector<int>& nums, int k){
    int sizeOfVec = nums.size();
    k = k % sizeOfVec;
    int end = sizeOfVec - 1;
    int mid = ((end) + (sizeOfVec - k))/2;
    for(int i = sizeOfVec - k; i <= mid ; i++)
        swap(nums[i],nums[end--]);
    
    end = sizeOfVec - k - 1;
    mid = (end)/2;
    for(int i = 0; i <= mid; i++)
        swap(nums[i],nums[end--]);

    end = (sizeOfVec - 1);
    mid = end/2;
    for(int i = 0; i <= mid; i++)
        swap(nums[i],nums[end--]);
}

int main(int argc, char** argv){
    vector<int> given {1,3,5,7,9};
    vector<int> result = kRotate(given,2);
    for(int i: result){
        cout<<i<<" ";
    }
    cout<<"\n";
    vector<int> given2 {1,3,5,7,9};
    kRotate_4(given2, 2);
    for(int i: given2){
        cout<<i<<" ";
    } //  7 9 1 3 5
    cout<<"\n";
    vector<int> given3 {1,2,3,4,5,6,7,8};
    kRotate_4(given3, 3);
    for(int i: given3){
        cout<<i<<" ";
    } // 6 7 8 1 2 3 4 5
    cout<<"\n";
    return 0;
}

