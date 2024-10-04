#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void printSubSeqsWithSumK(vector<int> mainArr, int index, vector<int> container, int sum){
    if(index>=mainArr.size()){
        int tempSum = 0;
        for(int i : container){
            tempSum+=i;
        }
        if(sum==tempSum){
            for(int i: container){
                cout << i << " ";
            }
            cout << "\n";
        }
        return;
    }
    container.push_back(mainArr[index]);
    printSubSeqsWithSumK(mainArr, index+1, container, sum);
    container.pop_back();
    printSubSeqsWithSumK(mainArr, index+1, container, sum);
}
int main(int argc, char** argv){
    vector<int> mainArr {1,2,1};
    vector<int> container;
    int sum = 2;
    printSubSeqsWithSumK(mainArr, 0, container, sum);
}
