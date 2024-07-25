#include <vector>
using namespace std;

int maxSumSubarray(vector<int> A) {
    bool f = true;
    int negMax = INT_MIN;
    for(int& i : A){
        if(i>0)f=false;
        if(i>negMax)negMax=i;
    }
    if(f)return negMax;
    int finalAnswer = 0;
    int temp = 0;
    int maxSum = 0;
    for(int& i: A){
        temp = maxSum + i;
        if(temp < i){
            maxSum = i;
        }else{
            maxSum = temp;
        }
        finalAnswer = max(maxSum,finalAnswer);
    }
    return finalAnswer;
}
