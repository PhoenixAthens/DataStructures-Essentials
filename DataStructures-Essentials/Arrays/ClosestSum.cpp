#include <iostream>
#include <utility>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::pair;

pair<int, int> closestSum(vector<int> arr, int x){
    vector<pair<int,int>> vecR(arr.size() * arr.size());
    int index = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1;j<arr.size();j++){
            pair<int, int> p(arr[i],arr[j]);
            vecR[index++] = p;
        }
    }
    int result = 0;
    for(int i = 1; i< index; i++){
        int sum = vecR[i].second + vecR[i].first;
        int baseCase = vecR[result].second + vecR[result].first;
        if(sum<=x && sum>baseCase){
            result = i;
        }
    }
    return vecR[result];
}

//let's exploit the fact that the array is sorted!!
pair<int, int> closestSum_2(vector<int> arr, int x){
    int left = 0;
    int right = arr.size()-1;
    int res_L,res_R;
    int diffin = INT_MAX;
    while(left<right){
        if(abs(arr[right]+arr[left]-x) < diffin){
            res_L = left;
            res_R = right;
            diffin = abs(arr[right]+arr[left]-x);
        }
        if(arr[left]+arr[right]>x){
            right--;
        }else{
            left++;
        }
    }
    return pair<int,int>(arr[res_L],arr[res_R]);
}


int main(int argc, char** argv){
    
}
