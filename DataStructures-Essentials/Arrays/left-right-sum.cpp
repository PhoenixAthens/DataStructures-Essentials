#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
int LR_division(vector<int> a){
    for(int i = 1 ;i< a.size(); i++){
        a[i]=a[i]+a[i-1];
    }
    int index = 0;
    int totalSum = a[a.size()-1];
    for(;index < a.size(); index++){
        if(totalSum==2*a[index]){
            return index;
        }
    }
    return -1;
}
int main(int argc, char** argv){
    vector<int> a{2,4,6,2,1,5,8,2};
    cout << "At index, "<<LR_division(a)+1<<" sums are equal on both sides!!\n";
    //At index, 5 sums are equal on both sides!! (dividing after 4th index (0-indexed), gives sum equal on both sides!!)
    return 0;
}
