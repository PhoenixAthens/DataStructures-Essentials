#include <vector>
#include <iostream>
using std::vector;
using std::cout;
//print all sub-sequences with the matching sum

bool printSubS(int, vector<int>&, vector<int>&, int, int);
void printSubSeqWithSum(int, vector<int>&, vector<int>&, int, int);

void printSubSeqWithSum(int index, vector<int>& main, vector<int>& store, int k ,int sum){
    if(index==main.size()){
        if(sum==k){
            for(int i: store){
                cout << i << " ";
            }
            cout << "\n";
        }
        return;
    }
    store.push_back(main[index]);
    sum+=main[index];
    printSubSeqWithSum(index+1, main, store, k, sum);
    sum-=store.back(); //  ---(1)
    store.pop_back();  //  ---(2)
    //both lines at (1) and (2) remove the same element, i.e., the element that was added at line 15
    printSubSeqWithSum(index+1, main, store, k, sum);
}

//print only one subsequence with the given sum
bool printSubS(int index, vector<int>& main, vector<int>& store, int k, int sum){
    if(index==main.size()){
        if(sum==k){
            for(int i: store){
                cout << i << " ";
            }
            cout << "\n";
            return true;
        }
        return false;
    }
    store.push_back(main[index]);
    sum+=main[index];
    bool retFrom = printSubS(index+1, main, store, k, sum);
    if(retFrom)return true;
    sum-=store.back();
    store.pop_back();
    retFrom = printSubS(index+1, main, store, k, sum);
    return retFrom;
}
//count subsequences with sum==k
int countSubSequencesWithSumK(int index, vector<int>& main, int k, int sum){
    if(index==main.size()){
        if(sum==k){
            return 1;
        }
        return 0;
    }
    
    sum+=main[index];
    int left = countSubSequencesWithSumK(index+1,main,k,sum);
    sum-=main[index];
    
    int right = countSubSequencesWithSumK(index+1,main,k,sum);
    return left+right;
}
int main(int argc, char** argv){
    vector<int> main {1, 2, 1};
    vector<int> store;
    int k = 4;
    //printSubSeqWithSum(0, main, store, k, 0);
    //cout << printSubS(0,main,store,k,0) << "\n";
    cout << countSubSequencesWithSumK(0, main, k, 0) << "\n";
    
}
