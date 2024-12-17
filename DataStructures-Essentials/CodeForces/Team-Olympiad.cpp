#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::min;
int main(){
    int n;
    cin >> n;
    vector<int> ones;
    vector<int> twos;
    vector<int> threes;
    int temp;
    int index{1};
    while(n--){
        cin >> temp;
        if(temp==1)ones.push_back(index);
        else if(temp==2)twos.push_back(index);
        else threes.push_back(index);
        index++;
    }
    int minVal = min(ones.size(),min(twos.size(),threes.size()));
    cout << minVal << "\n";
    for(int i=0;i<minVal;i++){
        cout << ones[i] << " " << twos[i] << " " << threes[i] << "\n";
    }
}
